#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <cstdlib> //for srand() func in linux
# include <typeinfo> ////for bad_cast in linux

Base	*generate( void ) {
	std::srand (time(NULL));
	int	rand = std::rand() % 3;

	switch ( rand ) {
		case 0:
			return new A();
			break ;
		case 1:
			return new B();
			break ;
		case 2:
			return new C();
			break ;
	}
	return NULL;
}

void	identify( Base *p ) {
	if ((A*)dynamic_cast<A*>(p) != nullptr)
		std::cout << "Pointer Variable type is -> [A]" << std::endl;
	if ((B*)dynamic_cast<B*>(p) != nullptr)
		std::cout << "Pointer Variable type is -> [B]" << std::endl;
	if ((C*)dynamic_cast<C*>(p) != nullptr)
		std::cout << "Pointer Variable type is -> [C]" << std::endl;
}

void	identify( Base &p ) {
	try {
		Base ptr = dynamic_cast<A&>(p);
		(void) ptr;
		std::cout << "Address Variable type is -> [A]" << std::endl;
	} catch (std::bad_cast &e) { (void)e; }
	try {
		Base ptr = dynamic_cast<B&>(p);
		(void) ptr;
		std::cout << "Address Variable type is -> [B]" << std::endl;
	} catch (std::bad_cast &e) { (void)e; }
	try {
		Base ptr = dynamic_cast<C&>(p);
		(void) ptr;
		std::cout << "Address Variable type is -> [C]" << std::endl;
	} catch (std::bad_cast &e) { (void)e; }
}

int	main( void ) {
	Base *b = generate();
	identify ( b );
	identify ( *b );

	delete b;
}

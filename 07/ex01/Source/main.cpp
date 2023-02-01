#include "iter.hpp"

template <typename B> void	func( B var ) {
	std::cout << var << std::endl;
}

int	main( void ) {
	std::string strArray[] = {"ab", "bc", "cd"};
	::iter(strArray, 3, &func);
	int	intArray[] = {1, 2, 3, 4, 5, 6};
	::iter(intArray, 6, &func);

}

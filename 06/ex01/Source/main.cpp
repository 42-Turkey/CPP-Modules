#include "Data.hpp"

int	main( void ) {
	Data d;

	d.a = 10;
	d.b = true;
	d.c = 'd';
	Data *dPtr = &d;

	std::cout << deserialaze ( serialaze ( dPtr ))->a << std::endl;
	std::cout << deserialaze ( serialaze ( dPtr ))->b << std::endl;
	std::cout << deserialaze ( serialaze ( dPtr ))->c << std::endl;
}

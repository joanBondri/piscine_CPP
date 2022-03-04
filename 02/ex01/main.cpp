#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( 10.6f );
	Fixed c(-45);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return 0;
}

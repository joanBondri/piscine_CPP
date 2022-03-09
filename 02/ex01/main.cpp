#include "Fixed.hpp"

int main( void ) {
	Fixed a(-300.6004f);
	Fixed a1(-300.60056f);
	Fixed b( 1230.1f );
	Fixed c(-45);
	std::cout << a << std::endl;
	std::cout << a1 << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return 0;
}

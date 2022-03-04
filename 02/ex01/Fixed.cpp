#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void) : store(0)
{
	std::cout << "Default constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Fixed& fixed)
{
	const int	rb = fixed.getRawBits();
	int			newRb = (int)rb;
	int buff = (newRb << 24) >> 24;
	bool		sign = (rb < 0);
	float		res;
	
	newRb *= sign ? -1 : 1;
	res = (float)(newRb >> 8);
	res += (float)buff / 100000000.0;
	res *= (sign) ? -1 : 1;
	std::cout << res;
	return os;
}

Fixed::Fixed(const float newValue)
{
	bool 	sign = (newValue < 0);
	float	copy = newValue;
	copy *= sign ? -1 : 1;
	int		intPart = (int)copy;
	copy -= (float)intPart;
	std::cout << copy << std::endl;
	copy *= 100000000.0;
	intPart <<= 8;
	intPart += (int)copy;
	this->store *= (sign && this->store > 0) ? -1 : 1;
	std::cout << "float constructor called" << std::endl;
}
Fixed::Fixed(const int newValue)
{
	bool sign = (newValue < 0);
	this->store = newValue << 8;
	this->store *= (sign && this->store > 0) ? -1 : 1;
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &newFixed) : store(newFixed.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed&Fixed::operator=(const Fixed &newFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->store = newFixed.getRawBits();
	return *this;
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

}
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->store;
}
void	Fixed::setRawBits(const int newRaw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->store = newRaw;
}


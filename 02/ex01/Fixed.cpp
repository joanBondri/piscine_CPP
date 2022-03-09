#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void) : store(0)
{
	std::cout << "Default constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Fixed& fixed)
{
	std::cout << (float)fixed.getRawBits() / 256.0;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	std::cout << (float)fixed.getRawBits() / 256.0;
	return os;
}

Fixed::Fixed(const float newValue)
{
	this->store = roundf(newValue * 256);
	std::cout << "float constructor called" << std::endl;
}
Fixed::Fixed(const int newValue)
{
	this->store *= newValue *256;
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

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / 256.0f);
}

int		Fixed::toInt(void) const
{
	return (getRawBits() / 256);
}


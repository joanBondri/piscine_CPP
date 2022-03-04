#include "Fixed.hpp"

Fixed::Fixed(void) : store(0)
{
	std::cout << "Default constructor called" << std::endl;
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


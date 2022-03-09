#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void) : store(0)
{}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	std::cout << (float)fixed.getRawBits() / 256.0;
	return os;
}

std::ostream& operator<<(std::ostream& os, Fixed& fixed)
{
	std::cout << (float)fixed.getRawBits() / 256.0;
	return os;
}

Fixed::Fixed(const float newValue)
{
	this->store = roundf(newValue * 256.0);
}
Fixed::Fixed(const int newValue)
{
	this->store = newValue * 256;
}
Fixed::Fixed(const Fixed &newFixed) : store(newFixed.getRawBits())
{}

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / 256.0f);
}

int		Fixed::toInt(void) const
{
	return (getRawBits() / 256);
}

Fixed&Fixed::operator=(const Fixed &newFixed)
{
	this->store = newFixed.getRawBits();
	return *this;
}
bool	Fixed::operator==(const Fixed &newFixed) const
{
	return (toFloat() == newFixed.toFloat());
}
bool	Fixed::operator!=(const Fixed &newFixed) const
{
	return (toFloat() != newFixed.toFloat());
}
bool	Fixed::operator<(const Fixed &newFixed) const
{
	return (toFloat() < newFixed.toFloat());
}
bool	Fixed::operator>(const Fixed &newFixed) const
{
	return (toFloat() > newFixed.toFloat());
}
bool	Fixed::operator<=(const Fixed &newFixed) const
{
	return (toFloat() <= newFixed.toFloat());
}
bool	Fixed::operator>=(const Fixed &newFixed) const
{
	return (toFloat() >= newFixed.toFloat());
}
Fixed	Fixed::operator*(const Fixed &newFixed) const
{
	Fixed	fixed(toFloat() * newFixed.toFloat());
	return (fixed);
}
Fixed	Fixed::operator/(const Fixed &newFixed) const
{
	Fixed	fixed(toFloat() / newFixed.toFloat());
	return (fixed);
}
Fixed	Fixed::operator+(const Fixed &newFixed) const
{
	Fixed	fixed(toFloat() + newFixed.toFloat());
	return (fixed);
}
Fixed	Fixed::operator-(const Fixed &newFixed) const
{
	Fixed	fixed(toFloat() - newFixed.toFloat());
	return (fixed);
}

Fixed	Fixed::operator--(int)
{
	Fixed	fix;
	fix.setRawBits(store--);
	return (fix);
}

Fixed	Fixed::operator++(int)
{
	Fixed	fix;
	fix.setRawBits(store++);
	return (fix);
}

Fixed	Fixed::operator--(void)
{
	store--;
	return (*this);
}

Fixed	Fixed::operator++(void)
{
	store++;
	return (*this);
}

Fixed::~Fixed(void)
{}
const Fixed&	Fixed::min(const Fixed &r1, const Fixed &r2)
{
	if (r1.toFloat() <= r2.toFloat())
		return r1;
	return r2;
}

const Fixed&	Fixed::max(const Fixed &r1, const Fixed &r2)
{
	if (r1.toFloat() >= r2.toFloat())
		return r1;
	return r2;
}

Fixed&	Fixed::min(Fixed &r1, Fixed &r2)
{
	if (r1.toFloat() <= r2.toFloat())
		return r1;
	return r2;
}

Fixed&	Fixed::max(Fixed &r1, Fixed &r2)
{
	if (r1.toFloat() >= r2.toFloat())
		return r1;
	return r2;
}

int		Fixed::getRawBits(void) const
{
	return this->store;
}
void	Fixed::setRawBits(const int newRaw)
{
	this->store = newRaw;
}

#pragma once
#include <iostream>

class Fixed
{
	private :
		int 				store;
		static const int	frac = 8;
	public :
		Fixed(void);
		Fixed(const Fixed &newFixed);
		Fixed(const int newValue);
		Fixed(const float newValue);
		
		Fixed operator*(const Fixed &newFixed) const;
		Fixed operator/(const Fixed &newFixed) const;
		Fixed operator+(const Fixed &newFixed) const;
		Fixed operator-(const Fixed &newFixed) const;
		bool operator>=(const Fixed &newFixed) const;
		bool operator<=(const Fixed &newFixed) const;
		bool operator>(const Fixed &newFixed) const;
		bool operator<(const Fixed &newFixed) const;
		bool operator!=(const Fixed &newFixed) const;
		bool operator==(const Fixed &newFixed) const;
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed& operator=(const Fixed &newFixed);
		Fixed	operator--(void);
		Fixed	operator++(void);
		Fixed	operator--(int);
		Fixed	operator++(int);
	
		static const Fixed&	min(const Fixed &r1, const Fixed &r2);
		static const Fixed&	max(const Fixed &r1, const Fixed &r2);
		static Fixed&	min(Fixed &r1, Fixed &r2);
		static Fixed&	max(Fixed &r1, Fixed &r2);
		~Fixed(void);
		void	setRawBits(const int newRaw);
};
std::ostream& operator<<(std::ostream& os, Fixed& fixed);
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

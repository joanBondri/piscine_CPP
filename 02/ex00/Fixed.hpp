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
		Fixed& operator=(const Fixed &newFixed);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(const int newRaw);
};

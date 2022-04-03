#include "Convert.hpp"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>

static	int	lint(long nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n, char *str)
{
	int		len_n;
	long	nbr;

	nbr = (long)n;
	len_n = lint(nbr);
	str[len_n--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[len_n--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

std::runtime_error	Convert::Impossible("Impossible");
std::runtime_error	Convert::NonDisplayable("not displayable");
Convert::Convert(void) : _input("") {}
Convert::Convert( Convert& co ) : _input( co._input ) {}
Convert::Convert(std::string input) : _input( input ) {}
Convert::~Convert(void) {}
Convert& Convert::operator=(Convert& co)
{
	(void)co;
	return *this;
}
char	Convert::toChar(void)
{
	int		c;
	char	s[30];

	try 
	{
		if (_input.size() == 3 && _input.c_str()[0] == '\'' && _input.c_str()[2] == '\'' )
		{
			c = (int)_input.c_str()[1];
			_input = ft_itoa(c, (char*)&s);
		}
		else
			c = toInt();
		if (c < -128 || c > 127)
			throw Convert::Impossible;
	} catch (std::exception& e) {
		throw Convert::Impossible;
	}
	if (isprint(c))
		return c;
	throw Convert::NonDisplayable;
	return '\0';
}
int		Convert::toInt(void)
{
	double	i;
	try {
		i = strtod(_input.c_str(), NULL);
		if ( i < -2147483648 || i > 2147483647)
			throw Convert::Impossible;
		return (static_cast<int>(i));
	} catch ( std::exception& e ) {
		throw Convert::Impossible;
	}
}

float	Convert::toFloat(void)
{
	float	f;

	try {
		f = static_cast<float>(strtof(_input.c_str(), NULL));
		return f;
	} catch (std::exception & e) {
		throw Convert::Impossible;
	}
}
double	Convert::toDouble(void)
{
	double	d;

	try {
		d = static_cast<double>(strtod(_input.c_str(), NULL));
		return d;
	} catch (std::exception & e) {
		throw Convert::Impossible;
	}
}
void	Convert::display( std::ostream& of )
{
	of << "char : ";
	try 
	{
		of << toChar();
	} catch (std::exception& e)
	{
		of << e.what();
	}
	of << std::endl << "int : ";
	try 
	{
		of << toInt();
	} catch (std::exception& e)
	{
		of << e.what();
	}
	of << std::endl << "float : ";
	try 
	{
		float f = toFloat();
		of << f;
		if (f == std::ceil(f) && f < 1000000)
			of << ".0f";
		else
			of << "f";

	} catch (std::exception& e)
	{
		of << e.what();
	}
	of << std::endl << "double : ";
	try 
	{
		double	d = toDouble();
		of << d;
		if (d == std::ceil(d) && d < 1000000)
			of << ".0";
	} catch (std::exception& e)
	{
		of << e.what();
	}
	of << std::endl;
}


std::ostream&	operator<<(std::ostream &of, Convert co)
{
	co.display(of);
	return of;
}

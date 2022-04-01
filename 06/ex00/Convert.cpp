#include "Convert.hpp"
#include <regex>
#include <ctgmath>
#include <cfloat>
#include <climits>

bool	isChar( std::string s1)
{
	if (s1.size() == 3 && s1.c_str()[0] == '\'' && s1.c_str()[2] == '\'')
		return true;
	return false;
}
const std::runtime_error	Convert::Impossible("Impossible");
const std::runtime_error	Convert::NonDisplayable("non displayable");
Convert::Convert( void ) : _type("") {}
Convert::Convert( std::string type ) : _input(type)
{
	std::string		tbExeption[2][3] =	{{"nan", "+inf", "-inf"},
										{"nanf", "+inff", "-inff"}};
	}
}

void	Convert::display(std::ofstream &of)
{
	of << "char : ";
	try
	{

	} catch(std::exception& e)
	{

	}
}

std::ofstream& operator<<(std::ofstream& of, Convert &co)
{
	co.display(of);
	return of;
}

//Convert::~Convert( void );
//Convert::Convert& operator=(Convert& co);
//void Convert::print( void );
//void Convert::printChar( void )
//{
//	if ( _type != "char" )
//		return ;
//	 if ()
//}
//void Convert::printInt( void );
//void Convert::printFloat( void );
//void Convert::printDouble( void );

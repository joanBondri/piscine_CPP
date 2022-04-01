#include <iostream>
#include <regex>
#include <ctgmath>
#include <climits>
#include "Convert.hpp"

//int		isInString(const std::string &str, const std::string *arr)
//{
//	for ( int i = 0; i < 2; i++ )
//	{
//		if (str == arr[i])
//			return i;
//	}
//	return -1;
//}
//
//void	print_char(const double	&d)
//{
//	if (d > 255 || d < 0 || ceil(d) != d)
//	{
//		std::cout << "char : Out of range" << std::endl;
//		return ;
//	}
//	char c = (int)d;
//	if (!std::isprint(c))
//		std::cout << "char : Non displayable" << std::endl;
//	else
//		std::cout << "char : " << c << std::endl;
//}
//
//void	print_float(const double &d)
//{
//	if ( d > FLT_MAX || d < -1.0 * FLT_MAX )
//		std::cout << "float : Out of range" << std::endl;
//	else
//		std::cout << "float : " << static_cast<float>(d) << std::endl;
//}
//
//void	print_int(const double &d)
//{
//	if ( d > INT_MAX || d < INT_MIN )
//		std::cout << "int : Out of range" << std::endl;
//	else
//		std::cout << "int : " << static_cast<int>(d) << std::endl;
//}
//
//void	print_all(const std::string& arg)
//{
//	std::string		tbExeption[2][3] =	{{"nan", "+inf", "-inf"},
//										{"nanf", "+inff", "-inff"}};
////	std::regex	int_match("[(+),(-)]{0,1}[0-9]+");
////	std::regex	float_match("[(+),(-)]{0,1}[0-9]+(\\.[0-9]+(f){0,1}){0,1}");
////	std::regex	double_match("[(+),(-)]{0,1}[0-9]+(\\.[0-9]+){0,1}");
//	int			ret;
//	double		convert;
//
//	if ((ret = isInString(arg, tbExeption[0])) == -1
//			|| (ret = isInString(arg, tbExeption[1])) == -1)
//		return (print_exception(ret, tbExeption));
//	convert = std::stod(arg);
//	print_char(convert);
//	print_int(convert);
//	print_float(convert);
//
//}

int		main(int argc, char **argv)
{
	try {
		if (argc > 2)
			throw std::runtime_error("Too many args");
		if (argc < 2)
			throw std::runtime_error("Too few args");
		Convert co((std::string(argv[1])));
	} catch ( std::exception & e ) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}

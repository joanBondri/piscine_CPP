#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat yop("yop", 150);
	Bureaucrat yup;
	std::cout << yop << std::endl;
	yop = yup;
	std::cout << yop << std::endl;
	yop.incrGrade();
	yop.incrGrade();
	std::cout << yop << std::endl;
	yop.decrGrade();
	yop.decrGrade();
	yop.decrGrade();
	yop.decrGrade();
	std::cout << yop << std::endl;
	return (0);
}

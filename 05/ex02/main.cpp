#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat yop("Yop", 110);
	Bureaucrat yup;
	std::cout << yop << std::endl;
	std::cout << yop << std::endl;
	yop.incrGrade();
	yop.incrGrade();
	std::cout << yop << std::endl;
	yop.decrGrade();
	yop.decrGrade();
	yop.decrGrade();
	yop.decrGrade();
	std::cout << yop << std::endl;
	std::cout << std::endl << std::endl << "=====================================" << std::endl;
	Form fo1("Dossier Miette", 130, 110);
	std::cout << fo1;
	yop.signForm(fo1);
	yup.signForm(fo1);
	Form fo2("Dossier 3", 130, 167);
	std::cout << fo2 << std::endl;
	Form *nop = new Form("Doms", 1, 23);
	std::cout << *nop;
	std::cout << std::endl << std::endl << "=====================================" << std::endl;
	return (0);
}

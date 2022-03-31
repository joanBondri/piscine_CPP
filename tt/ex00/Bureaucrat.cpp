#include "Bureaucrat.hpp"

const std::runtime_error Bureaucrat::GradeTooHighException("Grade Too High");
const std::runtime_error Bureaucrat::GradeTooLowException("Grade Too Low");

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150) {}
Bureaucrat::Bureaucrat(Bureaucrat &bu) : _name(bu._name), _grade(bu._grade) {}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade > 150) throw Bureaucrat::GradeTooLowException;
		if (grade < 1) throw Bureaucrat::GradeTooHighException;
		_grade = grade;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		_grade = 150;
	}
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat &bu)
{
	(void)bu;
	return *this;
}

const std::string	Bureaucrat::getName(void) const { return _name; }
int					Bureaucrat::getGrade(void) const { return _grade; }
void				Bureaucrat::incrGrade(void)
{
		_grade--;
		if (_grade >= 1)
			return ;
		_grade = 1;
		throw Bureaucrat::GradeTooHighException;
}
void		Bureaucrat::decrGrade(void)
{
		_grade++;
		if (_grade <= 150)
			return ;
		_grade = 150;
		throw Bureaucrat::GradeTooLowException;
}
Bureaucrat::~Bureaucrat(void){}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bu)
{
	os << bu.getName() << ", bureaucrat grade " << bu.getGrade() << ".";
	return os;
}

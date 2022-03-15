#include "Bureaucrat.hpp"
#include "Form.hpp"

const std::runtime_error Bureaucrat::GradeTooHighException("Grade Too High");
const std::runtime_error Bureaucrat::GradeTooLowException("Grade Too Low");

Bureaucrat::Bureaucrat(void) : _name("Bob"), _grade(150) {}
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
	_name = bu.getName();
	_grade = bu.getGrade();
	return *this;
}

std::string	Bureaucrat::getName(void) const { return _name; }
int			Bureaucrat::getGrade(void) const { return _grade; }
void		Bureaucrat::incrGrade(void)
{
	try
	{
		_grade--;
		if (_grade < 1) throw Bureaucrat::GradeTooHighException;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		_grade = 1;
	}
}
void		Bureaucrat::decrGrade(void)
{
	try
	{
		_grade++;
		if (_grade > 150) throw Bureaucrat::GradeTooLowException;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		_grade = 150;
	}
}
Bureaucrat::~Bureaucrat(void){}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bu)
{
	os << bu.getName() << ", bureaucrat grade " << bu.getGrade() << ".";
	return os;
}
void	Bureaucrat::signForm(Form &fo)
{
	try {
		if (fo.getSigned())
			throw std::invalid_argument(_name + " couldn't sign \"" + fo.getName() + "\" form because it is already signed\n");
		fo.beSigned(*this);
		if (!fo.getSigned())
			throw std::invalid_argument(_name + " couldn't sign \"" + fo.getName() + "\" form because s/he is too low grade\n");
		std::cout << (_name + " sign \"" + fo.getName() + "\" form\n");
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}

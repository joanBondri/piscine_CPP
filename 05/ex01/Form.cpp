#include "Form.hpp"

const std::runtime_error Form::GradeTooHighException("Grade Too High");
const std::runtime_error Form::GradeTooLowException("Grade Too Low");
void	Form::checkGrade(int &grade)
{
	try {
		if (grade < 1)
		{
			grade = 1;
			throw Form::GradeTooHighException;
		}
		if (grade > 150)
		{
			grade = 150;
			throw Form::GradeTooLowException;
		}
	} catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
Form::Form(void) : _name("important"), _gradeToSign(150), _gradeToExecute(150), _signed(false) {}
Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
	_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
	checkGrade(_gradeToSign);
	checkGrade(_gradeToExecute);
}
Form::~Form(void){}
std::string Form::getName(void) const { return _name; }
bool		Form::getSigned(void) const { return _signed; };
int			Form::getGradeToSign(void) const { return _gradeToSign; }
int			Form::getGradeToExecute(void) const { return _gradeToExecute; }

Form&		Form::operator=(Form &fo)
{
	_name = fo.getName();
	_signed = fo.getSigned();
	_gradeToSign = fo.getGradeToSign();
	_gradeToExecute = fo.getGradeToExecute();
	return *this;
}

std::ostream& operator<<(std::ostream& os, Form& fo)
{
	os << "\""<< fo.getName() << "\" form is " << (fo.getSigned() ? "signed" : "unsigned") << std::endl;
	os << "\tgrade to sign : " << fo.getGradeToSign() << "\n\tgrade to execute : " << fo.getGradeToExecute() << std::endl;
	return os;
}

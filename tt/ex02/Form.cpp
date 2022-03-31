#include "Form.hpp"

const std::runtime_error Form::GradeTooHighException("Grade Too High");
const std::runtime_error Form::GradeTooLowException("Grade Too Low");
void	Form::checkGrade(const int &grade)
{
		if (grade < 1)
		{
			throw Form::GradeTooHighException;
		}
		if (grade > 150)
		{
			throw Form::GradeTooLowException;
		}
}
Form::Form(void) : _name("Fol"), _gradeToSign(150), _gradeToExecute(150), _signed(false) {}
Form::Form(const Form& fo) : _name(fo._name), _gradeToSign(fo._gradeToSign), _gradeToExecute(fo._gradeToExecute), _signed(fo._signed) {}
Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
	_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
	try {
		checkGrade(_gradeToSign);
	} catch ( std::exception& e ) {
		std::cout << "Error GradeToSign in form \""<< _name << "\" : " << e.what() << std::endl;
	}
	try {
		checkGrade(_gradeToExecute);
	} 
	catch ( std::exception& e )
   	{
		std::cout << "Error GradeToExecute in form \""<< _name << "\" : " << e.what() << std::endl;
	}
}
Form::~Form(void){}
const 		std::string Form::getName(void) const { return _name; }
bool		Form::getSigned(void) const { return _signed; };
const int			Form::getGradeToSign(void) const { return _gradeToSign; }
const int			Form::getGradeToExecute(void) const { return _gradeToExecute; }

Form&		Form::operator=(Form &fo)
{
	return *this;
}

std::ostream& operator<<(std::ostream& os, Form& fo)
{
	os << "\""<< fo.getName() << "\" form is " << (fo.getSigned() ? "signed" : "unsigned") << std::endl;
	os << "\tgrade to sign\t\t : " << fo.getGradeToSign() << "\n\tgrade to execute\t : " << fo.getGradeToExecute() << std::endl;
	return os;
}
void		Form::beSigned(Bureaucrat &bu)
{
	try {
		checkGrade(_gradeToSign);
	} catch ( std::exception& e ) {
		std::cout << "Error GradeToSign in form \""<< _name << "\" : " << e.what() << std::endl;
		return ;
	}
	try {
		checkGrade(_gradeToExecute);
	} catch ( std::exception& e ) {
		std::cout << "Error GradeToExecute in form \""<< _name << "\" : " << e.what() << std::endl;
		return ;
	}
	try {
		if (bu.getGrade() > _gradeToSign)
			throw Form::GradeTooLowException;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		return ;
	}
	_signed = true;
	return ;
}

bool Form::execute( Bureaucrat& bu ) const
{
	if (!getSigned())
		throw std::runtime_error( "Form not already signed" );
	else if (getGradeToExecute() > bu.getGrade())
		throw Bureaucrat::GradeTooLowException;
	else
		return false;
	return true;
}

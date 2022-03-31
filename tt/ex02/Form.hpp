#pragma once
#include "Bureaucrat.hpp"

class Form
{
	private :
		const std::string	_name;
		bool				_signed;
		const int					_gradeToSign;
		const int					_gradeToExecute;
		void				checkGrade(const int &grade);
	public :
		Form(void);
		Form(const std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& fo);
		virtual ~Form(void);
		Form& operator=(Form &fo);
		const std::string getName(void) const;
		bool		getSigned(void) const;
		const int			getGradeToSign(void) const;
		const int			getGradeToExecute(void) const;
		static	const std::runtime_error GradeTooHighException;
		static	const std::runtime_error GradeTooLowException;
		void		beSigned(Bureaucrat &bu);
		virtual bool		execute( Bureaucrat& bu ) const = 0;
};
std::ostream& operator<<(std::ostream& os, Form& bu);

#pragma once
#include <iostream>

class Form
{
	private :
		std::string	_name;
		bool		_signed;
		int			_gradeToSign;
		int			_gradeToExecute;
		void		checkGrade(int &grade);
	public :
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~Form(void);
		Form& operator=(Form &fo);
		std::string getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		static	const std::runtime_error GradeTooHighException;
		static	const std::runtime_error GradeTooLowException;
};
std::ostream& operator<<(std::ostream& os, Form& bu);

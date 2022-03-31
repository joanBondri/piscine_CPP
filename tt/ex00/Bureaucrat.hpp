#pragma once
#include <iostream>

class Bureaucrat
{
	private :
		const std::string	_name;
		int					_grade;
	public :
		Bureaucrat(void);
		Bureaucrat(Bureaucrat &bu);
		Bureaucrat(std::string name, int grade);
		virtual ~Bureaucrat(void);

		Bureaucrat& operator=(Bureaucrat &bu);

		static	const std::runtime_error GradeTooHighException;
		static	const std::runtime_error GradeTooLowException;
		
		int getGrade(void) const;
		const std::string getName(void) const;
		
		void	incrGrade(void);
		void	decrGrade(void);
};
std::ostream& operator<<(std::ostream& os, Bureaucrat& bu);

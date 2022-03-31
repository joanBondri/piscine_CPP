#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form 
{
	protected :
		const std::string _target;
	public :
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm& ro );
		~RobotomyRequestForm( void );
		const RobotomyRequestForm& operator=( const RobotomyRequestForm& ro );
		RobotomyRequestForm( const std::string& target );
		virtual bool execute( Bureaucrat& bu ) const;
};

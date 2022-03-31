#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form 
{
	private :
		const std::string _target;
	public :
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm& pr );
		~PresidentialPardonForm( void );
		const PresidentialPardonForm& operator=( const PresidentialPardonForm& pr );
		PresidentialPardonForm( const std::string& target );
		virtual bool execute( Bureaucrat& bu ) const;
};

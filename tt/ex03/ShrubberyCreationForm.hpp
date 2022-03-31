#pragma once
#include "Form.hpp"

class ShrubberyCreationForm: public Form 
{
	protected :
		const std::string _target;
	public :
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm& sh );
		~ShrubberyCreationForm( void );
		const ShrubberyCreationForm& operator=( const ShrubberyCreationForm& sh );
		ShrubberyCreationForm( const std::string& target );
		virtual bool execute( Bureaucrat& bu ) const;
};

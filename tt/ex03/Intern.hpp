#pragma once
#include <iostream>
#include "Form.hpp"

class	Intern
{
	public :
		Intern( void );
		Intern( const Intern& in );
		Intern&	operator=( Intern& in );
		~Intern( void );
		Form*	makeForm( std::string s1, std::string s2 );
		static Form*	Shr( std::string s1 );
		static Form*	Pre( std::string s1 );
		static Form*	Rob( std::string s1 );

};

typedef struct	s_ptrfunc
{
	std::string	name;
	Form*		( *ptr )( std::string );
}				t_ptrfunc;

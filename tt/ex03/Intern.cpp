#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void ) {}
Intern::Intern( const Intern& in ) {}
Intern&	Intern::operator=( Intern& in ) { return *this; }
Intern::~Intern( void ) {}
Form*	Intern::makeForm( std::string s1, std::string s2 )
{
	t_ptrfunc	tb[3] = {{ "robotomy request", Intern::Rob },
						{ "presidential pardon", Intern::Pre },
						{ "shrubbery creation", Intern::Shr }};
	for ( int i = 0; i < 3; i++ )
	{
		if ( tb[i].name == s1 )
		{
			return (tb[i].ptr( s2 ));
		}
	}
	return (NULL);
}

Form*	Intern::Shr( std::string s1 )
{
	Form* yop = new ShrubberyCreationForm(s1);
	return yop;
}
Form*	Intern::Pre( std::string s1 )
{
	Form* yop = new PresidentialPardonForm(s1);
	return yop;
}
Form*	Intern::Rob( std::string s1 )
{
	Form* yop = new RobotomyRequestForm(s1);
	return yop;
}

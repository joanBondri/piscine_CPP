#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: Form( "PresidentialPardonForm", 25, 5 ), _target( "none" ) {}
PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
	: Form( "PresidentialPardonForm", 25, 5 ), _target( target ) {}
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& pr )
	: Form( "PresidentialPardonForm", 25, 5 ), _target( pr._target ) {}
const PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& pr )
{
	return *this;
}
	
bool PresidentialPardonForm::execute( Bureaucrat& bu ) const
{
	if (Form::execute( bu ))
		return true;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return false;
}
PresidentialPardonForm::~PresidentialPardonForm( void ) {}


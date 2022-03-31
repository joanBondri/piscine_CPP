#include "RobotomyRequestForm.hpp"
#include <random>
#include <time.h>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( void )
	: Form( "RobotomyRequestForm", 72, 45 ), _target( "none" ) {}
RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
	: Form( "RobotomyRequestForm", 72, 45 ), _target( target ) {}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& pr )
	: Form( "RobotomyRequestForm", 72, 45 ), _target( pr._target ) {}
const RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& pr )
{
	return *this;
}

 bool RobotomyRequestForm::execute( Bureaucrat& bu ) const
 {
 	if (Form::execute( bu ))
 		return true;
	srand (time(NULL));
	int	per = rand() % 2;
	if (per == 0)
 		std::cout << _target << " has been robotomized succefully!" << std::endl;
 	else
 		std::cout << _target << " has not been robotomized..." << std::endl;
 	return false;
 }

RobotomyRequestForm::~RobotomyRequestForm() {}

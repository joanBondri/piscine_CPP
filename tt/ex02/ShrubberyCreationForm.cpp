#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: Form( "ShrubberyCreationForm", 145, 137 ), _target( "none" ) {}
ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
	: Form( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& pr )
	: Form( "ShrubberyCreationForm", 145, 137 ), _target( pr._target ) {}
const ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& pr )
{
	return *this;
}
	
bool ShrubberyCreationForm::execute( Bureaucrat& bu ) const
{
	if (Form::execute( bu ))
		return true;
	std::ofstream of(_target + "_shrubbery");
    if(of.is_open())
    {
		const std::string tree = "\
              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\\\  _\\, y | \\//\n\
         _\\_.___\\\\, \\\\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._\n\
";
		of << tree << std::endl;
		of.close();
        std::cout<<"wrote the file successfully!"<<std::endl;
    }
	return false;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

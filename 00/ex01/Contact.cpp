#include "Contact.hpp"


std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}
void	Contact::set_first_name(std::string new_one)
{
	this->first_name = new_one;
}
std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}
void	Contact::set_last_name(std::string new_one)
{
	this->last_name = new_one;
}
std::string	Contact::get_nick_name(void)
{
	return (this->nick_name);
}
void	Contact::set_nick_name(std::string new_one)
{
	this->nick_name = new_one;
}
std::string	Contact::get_number(void)
{
	return (this->phone_number);
}
void	Contact::set_number(std::string new_one)
{
	this->phone_number = new_one;
}
std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
void	Contact::set_darkest_secret(std::string new_one)
{
	this->darkest_secret = new_one;
}
void		Contact::print_me(void)
{
	std::cout << "name\t\t: " << get_first_name() << std::endl;
	std::cout << "last name\t\t: " << get_last_name() << std::endl;
	std::cout << "nickname\t\t: " << get_nick_name() << std::endl;
	std::cout << "darkest secret\t\t: " << get_darkest_secret() << std::endl;
	std::cout << "phone number\t\t: " << get_number() << std::endl;
}

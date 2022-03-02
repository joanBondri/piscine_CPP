#include "PhoneBook.hpp"
#include <string>
#include <bits/stdc++.h>

int PhoneBook::many = 0;

void	PhoneBook::add_lst(std::string name, std::string lname, std::string nname, std::string secret, std::string number)
{
	for (int i = this->many; i > 0; i--)
	{
		this->contact[i].set_first_name(this->contact[i - 1].get_first_name());
		this->contact[i].set_last_name(this->contact[i - 1].get_last_name());
		this->contact[i].set_nick_name(this->contact[i - 1].get_nick_name());
		this->contact[i].set_darkest_secret(this->contact[i - 1].get_darkest_secret());
		this->contact[i].set_number(this->contact[i - 1].get_number());
	}
	this->contact[0].set_first_name(name);
	this->contact[0].set_last_name(lname);
	this->contact[0].set_nick_name(nname);
	this->contact[0].set_darkest_secret(secret);
	this->contact[0].set_number(number);
	this->many++;
	if (this->many == 8)
		this->many = 7;
}

void	PhoneBook::add_func(void)
{
	std::string	name;
	std::string	l_name;
	std::string	n_name;
	std::string	number;
	std::string	secret;

	while (true)
	{
		std::cout << "name \t\t\t: ";
		std::getline(std::cin, name);
		if (name != "")
			break ;
	}
	while (true)
	{
		std::cout << "last name \t\t: ";
		std::getline(std::cin, l_name);
		if (l_name != "")
			break ;
	}
	while (true)
	{
		std::cout << "nickname \t\t: ";
		std::getline(std::cin, n_name);
		if (n_name != "")
			break ;
	}
	while (true)
	{
		std::cout << "darkest secret\t\t: ";
		std::getline(std::cin, secret);
		if (secret != "")
			break ;
	}
	while (true)
	{
		std::cout << "phone number\t\t: ";
		std::getline(std::cin, number);
		if (number != "")
			break ;
	}
	this->add_lst(name, l_name, n_name, secret, number);
	std::cout << std::endl << "added !\n\n";
}

void	PhoneBook::search(void)
{
	std::string	str;

	std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
	std::cout << "_____________________________________________" << std::endl;

	for (int i = 0; i <= this->many; i++)
	{
		if (this->contact[i].get_first_name() != "")
		{
			std::cout << "|" << i + 1 << "         ";
			str = this->contact[i].get_first_name();
			str.resize(10, ' ');
			std::cout << "|" << str;
			str = this->contact[i].get_last_name();
			str.resize(10, ' ');
			std::cout << "|" << str;
			str = this->contact[i].get_nick_name();
			str.resize(10, ' ');
			std::cout << "|" << str << "|" <<std::endl;
		}
	}
	if (this->many == 0)
	{
		std::cout << "\nComme tu peux le voir, c'est bien vide ici...\n" << std::endl;
		return ;
	}
	std::cout << "alors ? Lequel vous donne envie ?" << std::endl << " > ";
	std::getline(std::cin, str);
	if (std::atoi(str.c_str()) > this->many + 1 || std::atoi(str.c_str()) < 1)
	{
		std::cout << "\nError\n" << std::endl;
		return ;
	}
	this->contact[std::atoi(str.c_str()) - 1].print_me();
}

void	PhoneBook::go_to_phone_book(void)
{
	std::string aa;
	std::cout << "Bonjour, Bonjour, que voulez vous faire ?" << std::endl;
	while (true)
	{
		std::cout << "\tADD\n\tSEARCH\n\tEXIT" << std::endl << " > ";
		std::getline(std::cin, aa);
		if (aa == "SEARCH")
			this->search();
		else if (aa == "ADD")
			this->add_func();
		else if (aa == "EXIT")
			break ;
		else
		{
			std::cout << std::endl << "essaie encore babyyyYYyy" << std::endl;
			continue ;
		}
	}
	std::cout << "ciaooo :)" <<std::endl;
}

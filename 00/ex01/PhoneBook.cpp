#include "PhoneBook.hpp"

void	PhoneBook::add_func(void)
{
	std::string	name;
	std::string	l_name;
	std::string	n_name;
	std::string	number;
	std::string	secret;

	while (true)
	{
		std::cout << "name \t\t:";
		std::getline(std::cin, name);
		if (name != "")
			break ;
	}
	while (true)
	{
		std::cout << "last name \t\t:";
		std::getline(std::cin, l_name);
		if (l_name != "")
			break ;
	}
	while (true)
	{
		std::cout << "nickname \t\t:";
		std::getline(std::cin, n_name);
		if (n_name != "")
			break ;
	}
	while (true)
	{
		std::cout << "darkest secret\t\t:";
		std::getline(std::cin, secret);
		if (secret != "")
			break ;
	}
	while (true)
	{
		std::cout << "phone number\t\t:";
		std::getline(std::cin, number);
		if (number != "")
			break ;
	}
	this->add_lst(name, l_name, n_name, secret, number);
}

void	PhoneBook::search(void)
{
	bool	yop = false;
	std::string	str;

	std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
	std::cout << "_____________________________________________" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (this->contact[i].get_first_name() != "")
		{
			yop = true;
			str = std::to_string(i);
			str.resize(10, " ");
			std::cout << "|" << str;
			str = this->contact[i].get_first_name();
			str.resize(10, " ");
			std::cout << "|" << str;
			str = this->contact[i].get_last_name();
			str.resize(10, " ");
			std::cout << "|" << str;
			str = this->contact[i].get_nick_name();
			str.resize(10, " ");
			std::cout << "|" << str << "|" <<std::endl;
		}
	}
}

void	PhoneBook::go_to_phone_book(void)
{
	std::string aa;
	std::cout << "Bonjour, Bonjour, que voulez vous faire ?" << std::endl;
	while (true)
	{
		std::cout << "\t1.ADD\n\t2.SEARCH\n\t3.EXIT" << std::endl;
		std::getline(std::cin, aa);
		if (aa == "SEARCH")
			this->search();
		else if (aa == "ADD")
			this->add_func();
		else if (aa == "EXIT")
			break ;
		else
		{
			std::cout << "essaie encore babyyyYYyyYyYYY" << std::endl;
			continue ;
		}
	}
	std::cout << "ciaooo :)" <<std::endl;
}

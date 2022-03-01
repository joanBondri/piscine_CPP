#include "PhoneBook.hpp"

using namespace std;
void	PhoneBook::add_func(void)
{
	string	name;
	string	l_name;
	string	n_name;
	string	phone_number;
	string	secret;

	while (true)
	{
		cout << "name \t\t:";
		getline(cin, name);
		if (name != "")
			break ;
	}
	while (true)
	{
		cout << "last name \t\t:";
		getline(cin, l_name);
		if (l_name != "")
			break ;
	}
	while (true)
	{
		cout << "nickname \t\t:";
		getline(cin, n_name);
		if (n_name != "")
			break ;
	}
	while (true)
	{
		cout << "darkest secret\t\t:";
		getline(cin, secret);
		if (secret != "")
			break ;
	}
	while (true)
	{
		cout << "phone number\t\t:";
		getline(cin, secret);
		if (secret != "")
			break ;
	}
	this->add_lst(name, l_name, n_name, secret, number);
}

void	PhoneBook::search(void)
{
	bool	yop = false;
	string	str;

	cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |" << endl;
	cout << "_____________________________________________" << endl;

	for (int i = 0; i < 8; i++)
	{
		if (this->contact[i].get_first_name() != "")
		{
			yop = true;
			str = to_string(i);
			str.resize(10, " ");
			cout << "|" << str;
			str = this->contact[i].get_first_name();
			str.resize(10, " ");
			cout << "|" << str;
			str = this->contact[i].get_last_name();
			str.resize(10, " ");
			cout << "|" << str;
			str = this->contact[i].get_nick_name();
			str.resize(10, " ");
			cout << "|" << str << "|" <<endl;
		}
	}
}
void	PhoneBook::exit(void);
void	PhoneBook::go_to_phone_book(void);

#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string>

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string darkest_secret;
		std::string phone_number;

	public :
		std::string	get_first_name(void);
		void		set_first_name(std::string new_one);
		std::string	get_last_name(void);
		void		set_last_name(std::string new_one);
		std::string	get_nick_name(void);
		void		set_nick_name(std::string new_one);
		void		set_darkest_secret(std::string new_one);
		std::string	get_darkest_secret(void);
		void		set_number(std::string new_one);
		std::string	get_number(void);
		void		print_me(void);
};

#endif

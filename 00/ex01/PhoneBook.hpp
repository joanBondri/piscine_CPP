#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook {
	private :
		static int many;
		Contact contact[8];
	public :
		void add_func(void);
		void search(void);
		void exit(void);
		void go_to_phone_book(void);
		void add_lst(std::string name, std::string lname, std::string nname, std::string secret, std::string number);
};

#endif

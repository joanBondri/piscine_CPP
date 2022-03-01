#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook {
	private :
		Contact contact[8];
	public :
		void add_func(void);
		void search(void);
		void exit(void);
		void go_to_phone_book(void);
};

#endif

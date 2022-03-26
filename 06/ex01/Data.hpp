#pragma once
#include <iostream>

class Data
{
	private :
		std::string _name;
		std::string	_ideas[10];

	public :
							Data(void);
							Data(const Data& da);
							Data(const std::string& na);
		Data&				operator=(const Data& da);
		virtual				~Data(void);
		const std::string&	getName(void) const;
		std::string*		getIdeas(void) const;
		void				printIdeas(void) const;
};

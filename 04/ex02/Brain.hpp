#pragma once
#include "iostream"

class Brain 
{
	public :
		std::string	ideas[100];
		Brain(void);
		Brain(const Brain& br);
		Brain&	operator=(const Brain& br);
		~Brain(void);
};

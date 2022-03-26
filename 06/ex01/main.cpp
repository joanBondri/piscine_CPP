#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	{
		uintptr_t swap;
		Data yo("Bobby");
		std::string	*pointer = yo.getIdeas();
		pointer[1] = "j'aime bien la glace";
		pointer[3] = "c'est sympas les vacances";
		pointer[4] = "et pourquoi pas le Danemark";
		yo.printIdeas();
		swap = serialize(&yo);
		Data *salut = deserialize(swap);
		salut->printIdeas();
	}
	{
		uintptr_t swap;
		Data *yo = new Data("Gerome");
		std::string	*pointer = yo->getIdeas();
		pointer[2] = "UIl faut que je refelechisse a mon cours de demain";
		pointer[6] = "La vie est belle quand meme :)";
		pointer[7] = "Je dois aller chercher du pain";
		yo->printIdeas();
		swap = serialize(yo);
		Data *salut = deserialize(swap);
		salut->printIdeas();
		delete yo;
	}
	return 0;
}

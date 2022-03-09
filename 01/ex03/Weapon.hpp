#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon(void);
		Weapon(std::string init);
		const std::string	&getType(void);
		void				setType(std::string newType);
};
#endif

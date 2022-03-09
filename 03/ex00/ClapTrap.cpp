#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :				_name("unknown"), _hit(10), _energy(10), _attack(10){ printMe(); }
ClapTrap::ClapTrap(std::string str) :	_name(str), _hit(10), _energy(10), _attack(10){ printMe() }
ClapTrap::ClapTrap(ClapTrap &p) :		_name(p.getName()), _hit(p.getHit()), _energy(p.getEnergy()), _attack(p.getAttack()){ printMe() }
ClapTrap&	ClapTrap::operator=(ClapTrap &p)
{
	_name = p.getName();
	_hit = p.getHit();
	_energy = p.getEnergy();
	_attack = p.getAttack();
	printMe();
	return *this;
}

std::string		ClapTrap::getName(void)						{ return _name; }
void			ClapTrap::setName(const std::string& str)	{ _name = str; }
unsigned int	ClapTrap::getHit(void)						{ return _hit; }
void			ClapTrap::setHit(const unsigned int& hi)	{ _hit = hi; }
unsigned int	ClapTrap::getEnergy(void)					{ return _energy; }
void			ClapTrap::setEnergy(const unsigned int& en)	{ _energy = en; }
unsigned int	ClapTrap::getAttack(void)					{ return _attack; }
void			ClapTrap::setAttack(const unsigned int& at)	{ _attack = at; }

void	ClapTrap::printMe(void)
{
	std::cout << _name << " appeared in a nonchalant way" << std::endl;
}
void	ClapTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << _name << " tried to do something, but he is too lame to do it" << std::endl;
		return ;
	}
	std::cout << "ClapTrap "<< _name <<" attacks " << target << ", causing " << _attack <<" points of damage!" << std::endl;
	_energy--;

}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap "<< _name <<" take " << amount << " damage." << std::endl;
	if (amount > _hit)
	{
		delete this;
		return ;
	}
	_hit -= amount;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0)
	{
		std::cout << _name << " tried to do something, but he is too lame to do it" << std::endl;
		return ;
	}
	std::cout << "ClapTrap "<< _name <<" healed hisself by "<< amount << " points" << std::endl;
	_energy--;
}

ClapTrap::~ClapTrap()
{
	std::cout << getName() << " desepeared mysteriously ..." << std::endl;
}

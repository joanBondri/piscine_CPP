#include "Data.hpp"

Data::Data( void ) : _name("dt") {}
Data::Data( const Data& da ) : _name(da.getName()) {}
Data::Data( const std::string& na ) : _name(na) {}
Data& Data::operator=( const Data& da )
{
	_name = da.getName();
	return *this;
}
Data::~Data( void ) {}

const std::string&	Data::getName( void ) const
{
	return _name;
}

std::string*		Data::getIdeas( void ) const
{
	return (std::string*)_ideas;
}

void				Data::printIdeas( void ) const
{
	std::cout << _name << " ideas :" << std::endl;
	for ( int i = 0; i < 10; i++ )
		std::cout << _ideas[i] << std::endl;
	return ;
}

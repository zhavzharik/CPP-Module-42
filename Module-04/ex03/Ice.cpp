#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( Ice const & src ) :AMateria(src)
{
	this->type = src.type;
	return;
}

Ice::~Ice( void ) {}

Ice & Ice::operator=(Ice const & rhs )
{
	this->type = rhs.type;
	return *this;
}
	
AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
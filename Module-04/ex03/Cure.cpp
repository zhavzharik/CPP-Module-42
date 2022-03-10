#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const & src ) : AMateria(src)
{
	this->type = src.type;
	return;
}

Cure::~Cure( void ) {}

Cure & Cure::operator=(Cure const & rhs )
{
	this->type = rhs.type;
	return *this;
}
	
AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
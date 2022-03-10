#include "AMateria.hpp"

AMateria::AMateria( void )
{
	this->type = "";
	return;
}

AMateria::AMateria( std::string const & type )
{
	this->type = type;
	return;
}

AMateria::AMateria( AMateria const & src )
{
	this->type = src.type;
	return;
}

AMateria::~AMateria( void ) {}

AMateria & AMateria::operator=(AMateria const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}


void AMateria::use( ICharacter& target )
{
	std::cout << "Member function use materia called for "<< target.getName() << std::endl;
}
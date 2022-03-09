#include "Animal.hpp"

Animal::Animal( void )
{
	type = "Animal";
	std::cout << "Default Animal constructor called." << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor for " << type << " called." << std::endl;
	return;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Assignement Animal operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

std::string	Animal::getType( void ) const {return type;}

void	Animal::makeSound() const
{
	std::cout << "Animal makes a specific sound!" << std::endl;
	return;
}

std::ostream &	operator<<(std::ostream & o, Animal const & i )
{
	o << "My type is " << i.getType() << "." << std::endl;
	return o;
}

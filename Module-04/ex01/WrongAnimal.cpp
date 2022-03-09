#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called." << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor for " << type << " called." << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement WrongAnimal operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

std::string	WrongAnimal::getType( void ) const {return type;}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a specific sound!" << std::endl;
	return;
}

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & i )
{
	o << "My type is " << i.getType() << "." << std::endl;
	return o;
}

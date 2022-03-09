#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	std::cout << "Default Dog constructor called." << std::endl;
	return;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor for " << type << " called." << std::endl;
	return;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Assignement Dog operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog barks!" << std::endl;
	return;
}

#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	_ideasDog = new Brain();
	std::cout << "Default Dog constructor called." << std::endl;
	return;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Copy Dog constructor called" << std::endl;
	_ideasDog = new Brain();
	_ideasDog = src._ideasDog;
	type = src.getType();
	//*this = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor for " << type << " called." << std::endl;
	delete _ideasDog;
	return;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Assignement Dog operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
		_ideasDog = rhs._ideasDog;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog barks!" << std::endl;
	return;
}

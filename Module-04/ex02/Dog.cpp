#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	_ideasDog = new Brain();
	std::cout << "Default Dog constructor called." << std::endl;
	return;
}

Dog::Dog( Dog const & src ) : Animal(src)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->type = src.getType();
	this->_ideasDog = new Brain(*src._ideasDog);
	
	return;
}

Dog::~Dog( void )
{
	delete _ideasDog;
	std::cout << "Dog destructor for " << type << " called." << std::endl;
	
	return;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Assignment Dog operator called.";
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_ideasDog = new Brain(*rhs._ideasDog);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog barks!" << std::endl;
	return;
}

void	Dog::printIdea( void ) const
{
	std::cout << _ideasDog->getIdea() << std::endl;
}

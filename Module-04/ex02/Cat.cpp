#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	_ideasCat = new Brain();
	std::cout << "Default Cat constructor called." << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->type = src.getType();
	this->_ideasCat = new Brain(*src._ideasCat);
	
	return;
}

Cat::~Cat( void )
{
	delete _ideasCat;
	std::cout << "Cat destructor for " << type << " called." << std::endl;
	return;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Assignment Cat operator called.";
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_ideasCat = new Brain(*rhs._ideasCat);
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat meows!" << std::endl;
	return;
}

void	Cat::printIdea( void ) const
{
	std::cout << _ideasCat->getIdea() << std::endl;
}

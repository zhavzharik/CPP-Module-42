#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	_ideasCat = new Brain();
	std::cout << "Default Cat constructor called." << std::endl;
	return;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_ideasCat = new Brain();
	_ideasCat = src._ideasCat;
	type = src.getType();
	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor for " << type << " called." << std::endl;
	delete _ideasCat;
	return;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Assignement Cat operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
		_ideasCat = rhs._ideasCat;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat meows!" << std::endl;
	return;
}

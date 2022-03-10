#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	std::cout << "Default Cat constructor called." << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	type = src.type;
	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor for " << type << " called." << std::endl;
	return;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Assignment Cat operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat meows!" << std::endl;
	return;
}

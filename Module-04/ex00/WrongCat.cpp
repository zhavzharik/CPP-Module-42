#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called." << std::endl;
	return;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	type = src.type;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor for " << type << " called." << std::endl;
	return;
}

WrongCat & WrongCat::operator=( const WrongCat & rhs )
{
	std::cout << "Assignment WrongCat operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat meows!" << std::endl;
	return;
}

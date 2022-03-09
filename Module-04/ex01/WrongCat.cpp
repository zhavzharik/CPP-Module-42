#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	type = "WrongCat";
	_ideasCat = new Brain();
	std::cout << "Default WrongCat constructor called." << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor for " << type << " called." << std::endl;
	delete _ideasCat;
	return;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "Assignement WrongCat operator called.";
	if (this != &rhs)
	{
		type = rhs.type;
		_ideasCat = rhs._ideasCat;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat meows!" << std::endl;
	return;
}

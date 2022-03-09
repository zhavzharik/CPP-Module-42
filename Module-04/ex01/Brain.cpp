#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain constructor called." << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << " called." << std::endl;
	return;
}

Brain & Brain::operator=(Brain const & rhs )
{
	int i = 0;

	std::cout << "Assignement Brain operator called.";
	if (this != &rhs)
	{
		while ( i++ < 100)
			_ideas[i] = rhs._ideas[i];
	}
	return *this;
}


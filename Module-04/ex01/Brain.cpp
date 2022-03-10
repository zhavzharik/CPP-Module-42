#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "My idea.";
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << " called." << std::endl;
	return;
}

Brain & Brain::operator=(Brain const & rhs )
{
	std::cout << "Assignment Brain operator called.";
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::string	Brain::getIdea( void ) const
{
	return this->_ideas[50];
}


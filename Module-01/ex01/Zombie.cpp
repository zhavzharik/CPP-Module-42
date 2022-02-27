#include "Zombie.hpp"

Zombie::Zombie() : _name("default name")
{
	std::cout << this->_name << " created!" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed!" << std::endl;
	
	return;
}

void	Zombie::setName( std::string name)
{
	this->_name = name;
	std::cout  << "initialize the zombie, giving him the name " << this->_name << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " created!" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed!" << std::endl;
	
	return;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


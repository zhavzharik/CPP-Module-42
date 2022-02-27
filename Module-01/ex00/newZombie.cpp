#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name )
{
	Zombie*	bob = new Zombie(name);

	return bob;
}


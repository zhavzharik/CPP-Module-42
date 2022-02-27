#include "Zombie.hpp"

void	Zombie::randomChump( std::string name )
{
	Zombie	newZombie(name);
	newZombie.announce();

}
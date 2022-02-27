#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	int i = N - 1;

	Zombie*	zombies = new Zombie[N];
	while (i >= 0)
	{
		zombies[i].setName(name);
		i--;
	}

	return zombies;
}
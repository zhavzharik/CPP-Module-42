#include "Zombie.hpp"

int	main()
{
	int	N = 3;
	int	i = 0;

	Zombie	zombie;
	Zombie*	zombies = zombie.zombieHorde(N, "bob");

	while (i < N)
	{
		zombies[i].announce();
		i++;
	}

	delete [] zombies;

	return 0;
}
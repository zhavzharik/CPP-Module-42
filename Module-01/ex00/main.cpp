#include "Zombie.hpp"

int	main()
{
	Zombie	zombie1("Bob");
	zombie1.announce();

	Zombie* zombie2 = zombie1.newZombie("Jim");
	zombie2->announce();

	zombie1.randomChump("Leo");

	delete zombie2;

	return 0;
}
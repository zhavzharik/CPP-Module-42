#include "DiamondTrap.hpp"

int	main( void )
{
	std::cout << std::endl << "DiamondTrap Objects." << std::endl;

	DiamondTrap	c("Cat");
	std::cout << std::endl;

	std::cout << c << std::endl;
	c.attack("Mouse");
	c.takeDamage(30);
	c.beRepaired(20);
	c.whoAmI();
	c.highFivesGuys();
	c.guardGate();
	std::cout << c << std::endl << std::endl;

	DiamondTrap	a("Lion");
	std::cout << std::endl;

	std::cout << a << std::endl;
	a = c;
	std::cout << "Lion after assignment." << std::endl;
	std::cout << a << std::endl;
	a.takeDamage(7);
	a.whoAmI();
	a.highFivesGuys();
	a.guardGate();
	std::cout << a << std::endl << std::endl;

	c.takeDamage(90);
	a.takeDamage(108);
	std::cout << c << std::endl;
	std::cout << a << std::endl << std::endl;

	return 0;
}

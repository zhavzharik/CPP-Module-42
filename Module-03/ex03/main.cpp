#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	c("Cat"); // add more tests
	DiamondTrap	a;

	c.attack("Mouse");
	c.takeDamage(5);
	c.beRepaired(20);
	a = c;
	c.takeDamage(6);
	c.whoAmI();
	c.beRepaired(4);
	c.takeDamage(23);
	a.takeDamage(7);
	a.whoAmI();

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	c.takeDamage(90);
	a.takeDamage(108);

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	return 0;
}

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	c("Cat");
	FragTrap	a;

	c.attack("Mouse");
	c.takeDamage(5);
	c.beRepaired(20);
	a = c;
	c.takeDamage(6);
	c.highFivesGuys();
	c.beRepaired(4);
	c.takeDamage(23);
	a.takeDamage(7);
	a.highFivesGuys();

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	c.takeDamage(90);
	a.takeDamage(108);

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	return 0;
}

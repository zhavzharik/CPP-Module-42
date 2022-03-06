#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	c("Cat");
	ScavTrap	a;

	c.attack("Mouse");
	c.takeDamage(5);
	c.beRepaired(20);
	a = c;
	c.takeDamage(6);
	c.guardGate();
	c.beRepaired(4);
	c.takeDamage(23);
	a.takeDamage(7);
	a.guardGate();

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	return 0;
}

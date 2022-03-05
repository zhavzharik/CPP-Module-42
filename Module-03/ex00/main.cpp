#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	c("Cat");
	ClapTrap	a;

	c.attack("Mouse");
	c.takeDamage(5);
	c.beRepaired(20);
	a = c;
	c.takeDamage(6);
	c.beRepaired(4);
	c.takeDamage(23);
	a.takeDamage(7);

	std::cout << c << std::endl;
	std::cout << a << std::endl;

	return 0;
}

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	c("Cat");
	std::cout << std::endl;

	std::cout << c << std::endl;
	c.attack("Mouse");
	c.takeDamage(5);
	c.beRepaired(20);
	c.takeDamage(6);
	c.beRepaired(4);
	c.takeDamage(16);
	std::cout << c << std::endl << std::endl;

	ClapTrap	a("Lion");
	std::cout << std::endl;

	std::cout << a << std::endl;
	a = c;
	std::cout << "After assignment:" << std::endl;
	std::cout << a << std::endl;

	a.takeDamage(7);
	std::cout << a << std::endl;

	return 0;
}

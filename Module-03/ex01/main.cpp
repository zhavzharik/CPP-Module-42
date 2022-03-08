#include "ScavTrap.hpp"

int	main( void )
{
	std::cout << std::endl << "ScavTrap Objects." << std::endl;
	ScavTrap	c("Cat");
	std::cout << std::endl;

	std::cout << c << std::endl << std::endl;
	c.attack("Mouse");
	c.takeDamage(5);
	c.beRepaired(20);
	c.takeDamage(6);
	c.guardGate();
	c.beRepaired(4);
	c.takeDamage(23);
	std::cout << c << std::endl << std::endl;

	ScavTrap	a("Lion");
	std::cout << std::endl;

	std::cout << a << std::endl;
	a = c;
	std::cout << "After assignment:" << std::endl;
	std::cout << a << std::endl;
	a.takeDamage(7);
	a.guardGate();
	std::cout << a << std::endl << std::endl;

	c.takeDamage(90);
	a.takeDamage(108);
	std::cout << c << std::endl;
	std::cout << a << std::endl << std::endl;

	return 0;
}

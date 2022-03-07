#include "ScavTrap.hpp"

int	main( void )
{
	std::cout << std::endl << "ScavTrap Objects." << std::endl;
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

	std::cout << std::endl<< "ClapTrap Objects." << std::endl;

	ClapTrap	b("Cat");
	ClapTrap	d;

	b.attack("Mouse");
	b.takeDamage(5);
	b.beRepaired(20);
	d = b;
	b.takeDamage(6);
	b.beRepaired(4);
	b.takeDamage(23);
	d.takeDamage(7);

	std::cout << b << std::endl;
	std::cout << d << std::endl;
	std::cout << std::endl;


	return 0;
}

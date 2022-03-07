#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	std::cout << std::endl << "FragTrap Objects." << std::endl;
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

	std::cout << std::endl << "ScavTrap Objects." << std::endl;
	ScavTrap	c1("Cat");
	ScavTrap	a1;

	c1.attack("Mouse");
	c1.takeDamage(5);
	c1.beRepaired(20);
	a1 = c1;
	c1.takeDamage(6);
	c1.guardGate();
	c1.beRepaired(4);
	c1.takeDamage(23);
	a1.takeDamage(7);
	a1.guardGate();

	std::cout << c1 << std::endl;
	std::cout << a1 << std::endl;


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

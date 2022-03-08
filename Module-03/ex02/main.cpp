#include "FragTrap.hpp"
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


	std::cout << std::endl << "FragTrap Objects." << std::endl;
	FragTrap	c1("Cat");
	std::cout << std::endl;

	std::cout << c1 << std::endl << std::endl;
	c1.attack("Mouse");
	c1.takeDamage(5);
	c1.beRepaired(20);
	c1.takeDamage(6);
	c1.highFivesGuys();
	c1.beRepaired(4);
	c1.takeDamage(23);
	std::cout << c1 << std::endl << std::endl;

	FragTrap	a1("Lion");
	std::cout << std::endl;

	std::cout << a1 << std::endl;
	a1 = c1;
	std::cout << "After assignment:" << std::endl;
	std::cout << a1 << std::endl;
	a1.highFivesGuys();
	a1.takeDamage(7);

	std::cout << a1 << std::endl << std::endl;

	c1.takeDamage(90);
	a1.takeDamage(108);
	std::cout << c1 << std::endl;
	std::cout << a1 << std::endl << std::endl;




	return 0;
}

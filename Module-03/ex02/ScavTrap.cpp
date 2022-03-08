#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_name = "default name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default ScavTrap constructor called. " << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Parametric ScavTrap constructor called. " << this->_name << " created." << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor for " << this->_name << " called." << std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Assignement ScavTrap operator called. ";
	if (this != &rhs)
	{
		this->_name = rhs.getName().append(" of Schrodinger");
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " can't attack " << target << " because ";
		std::cout << this->_name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
	return;
}

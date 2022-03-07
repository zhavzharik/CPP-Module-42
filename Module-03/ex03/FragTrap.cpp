#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_hitPointsFrag = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_attackDamageFrag = 30;
	std::cout << "Default FragTrap constructor called. " << std::endl;
	return;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_hitPointsFrag = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_attackDamageFrag = 30;
	std::cout << "Parametric FragTrap constructor called. " << this->_name << " created." << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor for " << this->_name << " called." << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "Assignement FragTrap operator called. ";
	if (this != &rhs)
	{
		this->_name = rhs.getName() + " of Schrodinger";
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
		std::cout << this->_name << " created." << std::endl;
	}
	return *this;
}

void	FragTrap::attack( const std::string& target )
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "FragTrap " << this->_name << " can't attack " << target << " because ";
		std::cout << this->_name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " says high fives." << std::endl;
	return;
}

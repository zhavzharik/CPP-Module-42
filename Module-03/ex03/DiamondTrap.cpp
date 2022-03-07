#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = _hitPointsFrag;
	this->_energyPoints = _energyPointsScav;
	this->_attackDamage = _attackDamageFrag;
	std::cout << "Default DiamondTrap constructor called. " << std::endl;
	return;
}

DiamondTrap::DiamondTrap( const std::string &name )
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = _hitPointsFrag;
	this->_energyPoints = _energyPointsScav;
	this->_attackDamage = _attackDamageFrag;
	std::cout << "Parametric DiamondTrap constructor called. " << this->_name << " created." << std::endl;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor for " << this->_name << " called." << std::endl;
	return;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "Assignement DiamondTrap operator called. ";
	if (this != &rhs)
	{
		this->_name = rhs._name + " of Schrodinger";
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
	return;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->_name << " and my Parents name is " << ClapTrap::_name << "." << std::endl;
	return;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name(""), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "Default ClapTrap constructor called. " << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "Parametric ClapTrap constructor called. " << this->_name << " created." << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor for " << this->_name << " called." << std::endl;
	return;
}

std::string	ClapTrap::getName( void ) const { return this->_name; }

int	ClapTrap::getHitPoints( void ) const { return this->_hitPoints; }

int	ClapTrap::getEnergyPoints( void ) const { return this->_energyPoints; }

int	ClapTrap::getAttackDamage( void ) const { return this->_attackDamage; }

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement ClapTrap operator called. ";
	if (this != &rhs)
	{
		this->_name = rhs.getName().append("Copy");
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
		std::cout << this->_name << " created." << std::endl;
	}
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " can't attack " << target << " because ";
		std::cout << this->_name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << this->_name << " takes damage in amount of " << amount << " points. ";
	this->_hitPoints -= amount;
	std::cout << this->_name << " has total " << this->_hitPoints << " hit points." << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "The health of " << this->_name << " is in critical condition!" << std::endl;

	return;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << this->_name << " repairs itself, it gets " << amount << " hit points back. ";
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << this->_name << " has total " << this->_hitPoints << " hit points." << std::endl;
	}
	else
	{
		std::cout << this->_name << " can't repair itself because ";
		std::cout << this->_name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const & i )
{
	if (i.getHitPoints() > 0)
		o << i.getName() << " is alive.";
	else
		o << i.getName() << " is dead.";

	return o;
}

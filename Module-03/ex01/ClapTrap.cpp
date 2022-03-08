#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default name"), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "Default ClapTrap constructor called. " << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "Parametric ClapTrap constructor called. " << _name << " created." << std::endl;
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
	std::cout << "ClapTrap destructor for " << _name << " called." << std::endl;
	return;
}

std::string		ClapTrap::getName( void ) const { return _name; }

unsigned int	ClapTrap::getHitPoints( void ) const { return _hitPoints; }

unsigned int	ClapTrap::getEnergyPoints( void ) const { return _energyPoints; }

unsigned int	ClapTrap::getAttackDamage( void ) const { return _attackDamage; }

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement ClapTrap operator called. ";
	if (this != &rhs)
	{
		this->_name = rhs.getName().append("Copy");
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " can't attack " << target << " because ";
		std::cout << _name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << _name << " takes damage in amount of " << amount << " points. ";
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " has total " << _hitPoints << " hit points." << std::endl;
	if (_hitPoints <= 0)
		std::cout << "The health of " << _name << " is in critical condition!" << std::endl;

	return;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs itself, it gets " << amount << " hit points back. ";
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " has total " << _hitPoints << " hit points." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " can't repair itself because ";
		std::cout << "ClapTrap " << this->_name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const & i )
{
	o << "ClapTrap " << i.getName() << " has " << i.getHitPoints() << " hit points, " << i.getEnergyPoints() << " energy points, " << i.getAttackDamage() << " attack damage. ";
	if (i.getHitPoints() > 0)
		o << i.getName() << " is alive.";
	else
		o << i.getName() << " is dead.";

	return o;
}

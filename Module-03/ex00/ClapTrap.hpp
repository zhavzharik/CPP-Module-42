#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:

	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;

public:

	ClapTrap( void );
	ClapTrap(std::string name);
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	std::string	getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackDamage( void ) const;

	ClapTrap &	operator=( ClapTrap const & rhs );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

};

std::ostream &	operator<<(std::ostream & o, ClapTrap const & i );







#endif

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:

	ClapTrap( void );
	std::string					_name;
	unsigned int				_hitPoints;
	unsigned int				_energyPoints;
	unsigned int				_attackDamage;

public:

	ClapTrap(std::string name);
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	const std::string	&getName( void ) const;
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

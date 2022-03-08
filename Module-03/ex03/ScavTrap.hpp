#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:

	ScavTrap( void );
	unsigned int	_energyPointsScav;

public:

	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap &	operator=( ScavTrap const & rhs );

	void	attack( const std::string& target );
	void	guardGate( void );

};


#endif

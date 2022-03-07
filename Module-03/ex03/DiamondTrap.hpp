#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:

	DiamondTrap( void );
	std::string		_name;

public:

	DiamondTrap( const std::string &name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );

	DiamondTrap &	operator=( DiamondTrap const & rhs );

	void	attack( const std::string& target );
	void	whoAmI( void );

};






#endif

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:

	FragTrap( void );
	unsigned int	_hitPointsFrag;
	unsigned int	_attackDamageFrag;

public:

	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap &	operator=( FragTrap const & rhs );

	void	attack( const std::string& target );
	void	highFivesGuys( void );

};


#endif

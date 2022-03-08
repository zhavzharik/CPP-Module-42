#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

	FragTrap( void );
	
public:

	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap &	operator=( FragTrap const & rhs );

	void	attack( const std::string& target );
	void	highFivesGuys( void );

};


#endif

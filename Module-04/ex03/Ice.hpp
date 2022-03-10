#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

public:

	Ice( void );
	Ice( Ice const & src );
	~Ice( void );

	Ice & operator=(Ice const & rhs );
	
	AMateria* clone() const;
	void use( ICharacter& target );

};




# endif
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	private:

		Brain*	_ideasCat;

	public:

		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );

		WrongCat & operator=( WrongCat const & rhs );
		void	makeSound() const;
};



#endif

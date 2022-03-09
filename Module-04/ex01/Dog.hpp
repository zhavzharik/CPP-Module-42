#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain*	_ideasDog;

	public:

		Dog( void );
		Dog( Dog const & src );
		~Dog( void );

		Dog & operator=( Dog const & rhs );
		void	makeSound() const;
};



#endif

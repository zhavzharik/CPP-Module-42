#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain*	_ideasCat;

	public:

		Cat( void );
		Cat( Cat const & src );
		~Cat( void );

		Cat & operator=( Cat const & rhs );
		void	makeSound() const;
};



#endif

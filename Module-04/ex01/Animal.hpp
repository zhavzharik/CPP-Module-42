#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:

		std::string	type;

	public:

		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );

		Animal & operator=( Animal const & rhs );
		std::string	getType( void ) const;
		virtual void	makeSound() const;
};

std::ostream &	operator<<(std::ostream & o, Animal const & i );


#endif

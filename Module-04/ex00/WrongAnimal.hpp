#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:

		std::string	type;

	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void );

		WrongAnimal & operator=( WrongAnimal const & rhs );
		std::string	getType( void ) const;
		void	makeSound() const;
};

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & i );


#endif

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:

	std::string	_ideas[100];

public:
	Brain( void );
	Brain( Brain const & src );
	~Brain();

	Brain & operator=(Brain const & rhs );
};


#endif

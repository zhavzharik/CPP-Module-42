#ifndef TEST_HPP
# define TEST_HPP

# include <iostream>

class Test
{
private:

	float	_number;

public:

	Test( void );
	Test( int const number );
	Test( float const number );
	Test( double const number );
	Test( Test const & src );
	~Test();

	Test &	operator=( Test const & rhs );

	bool	operator>(Test const & rhs ) const;
	bool	operator<( Test const & rhs ) const;

	float	getNumber( void ) const;
};

std::ostream &	operator<<(std::ostream & o, Test const & i );

#endif
# include "Test.hpp"

Test::Test( void ) : _number(0) {}

Test::Test( int const number ) : _number(number) {}

Test::Test( float const number ) : _number(number) {}

Test::Test( double const number ) : _number(number) {}

Test::Test( Test const & src )
{
	*this = src;
	return;
}

Test::~Test() {}

Test &	Test::operator=( Test const & rhs )
{
	this->_number = rhs._number;
	return *this;
}

bool	Test::operator>(Test const & rhs ) const
{
	if (this->_number > rhs._number)
		return true;
	return false;
}

bool	Test::operator<( Test const & rhs ) const
{
	if (this->_number < rhs._number)
		return true;
	return false;
}

float	Test::getNumber( void ) const
{
	return this->_number;
}

std::ostream &	operator<<(std::ostream & o, Test const & i )
{
	o << i.getNumber();

	return o;
}

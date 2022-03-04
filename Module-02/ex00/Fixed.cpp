#include "Fixed.hpp"

const int	Fixed::_numberBits = 8;

Fixed::Fixed( void ) : _fixedPointNumber( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointNumber;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointNumber = raw;
	return;
}

#include "Fixed.hpp"

const int	Fixed::_numberBits = 8;

Fixed::Fixed( void ) : _fixedPointNumber( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const n ) : _fixedPointNumber( n )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNumber = n * (1 << this->_numberBits);
	return;
}

Fixed::Fixed( float const m )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNumber = (int) roundf( m * (1 << this->_numberBits));
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

float	Fixed::toFloat( void ) const
{
	float	fNumber;
	fNumber = (float) this->_fixedPointNumber / (1 << this->_numberBits);

	return fNumber;
}

int		Fixed::toInt( void ) const
{
	int	iNumber;
	iNumber = this->_fixedPointNumber / (1 << this->_numberBits);
	return iNumber;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}

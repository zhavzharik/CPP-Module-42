#include "Fixed.hpp"

const int	Fixed::_numberBits = 8;

Fixed::Fixed( void ) : _fixedPointNumber( 0 )
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const n ) : _fixedPointNumber( n )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNumber = n * 256;
	return;
}

Fixed::Fixed( float const m )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNumber = (int) roundf( m * 256);
	return;
}

Fixed::Fixed( Fixed const & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	//std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs )
{
	if (this->_fixedPointNumber > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & rhs )
{
	if (this->_fixedPointNumber < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & rhs )
{
	if (this->_fixedPointNumber >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & rhs )
{
	if (this->_fixedPointNumber <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & rhs )
{
	if (this->_fixedPointNumber == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & rhs )
{
	if (this->_fixedPointNumber != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const & rhs )
{
	return Fixed(this->_fixedPointNumber + rhs.getRawBits());
}

Fixed	Fixed::operator-( Fixed const & rhs )
{
	return Fixed(this->_fixedPointNumber - rhs.getRawBits());
}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	return Fixed((float) ((long int)this->_fixedPointNumber * (long int)rhs.getRawBits()) /256/256);
}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	return Fixed( (int) ((long int) this->_fixedPointNumber * 256 / (long int) rhs.getRawBits()));
}

Fixed &	Fixed::operator++( void )
{
	this->_fixedPointNumber += (int)roundf(EPSILON * 256);

	return *this;
}

const Fixed	Fixed::operator++( int )
{
	Fixed	it(*this);
	++*this;
	return it;
}

Fixed &	Fixed::operator--( void )
{
	this->_fixedPointNumber -= (int)roundf(EPSILON * 256);
	return *this;
}

const Fixed	Fixed::operator--( int )
{
	Fixed	it(*this);
	--*this;
	return it;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
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
	fNumber = (float) this->_fixedPointNumber / 256;

	return fNumber;
}

int		Fixed::toInt( void ) const
{
	int	iNumber;
	iNumber = this->_fixedPointNumber / 256;
	return iNumber;
}

Fixed &	Fixed::min( Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const & rhs)
{
	if (&lhs < &rhs)
		return lhs;
	return rhs;
}

Fixed &	Fixed::max( Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const & rhs)
{
	std::cout << "lhs " << lhs.toFloat() << std::endl; // delete
	std::cout << "rhs " << rhs.toFloat() << std::endl; // delete
	if (&lhs > &rhs)
		return lhs;
	return rhs;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}

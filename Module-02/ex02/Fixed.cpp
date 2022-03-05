#include "Fixed.hpp"

const int	Fixed::_numberBits = 8;

Fixed::Fixed( void ) : _fixedPointNumber( 0 )
{
	return;
}

Fixed::Fixed( int const n )
{
	this->_fixedPointNumber = n * (1 << this->_numberBits);
	return;
}

Fixed::Fixed( float const m )
{
	this->_fixedPointNumber = (int) roundf( m * (1 << this->_numberBits));
	return;
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return;
}

Fixed::~Fixed()
{
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs ) const
{
	if (this->_fixedPointNumber > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & rhs ) const
{
	if (this->_fixedPointNumber < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & rhs ) const
{
	if (this->_fixedPointNumber >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & rhs ) const
{
	if (this->_fixedPointNumber <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & rhs ) const
{
	if (this->_fixedPointNumber == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & rhs ) const
{
	if (this->_fixedPointNumber != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const & rhs )
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-( Fixed const & rhs )
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

const Fixed &	Fixed::operator++( void )
{
	this->_fixedPointNumber++;

	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	it(*this);
	this->_fixedPointNumber++;
	return it;
}

const Fixed &	Fixed::operator--( void )
{
	this->_fixedPointNumber--;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed	it(*this);
	this->_fixedPointNumber--;
	return it;
}

int		Fixed::getRawBits( void ) const
{
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

Fixed &	Fixed::min( Fixed & lhs, Fixed & rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const & rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed &	Fixed::max( Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}

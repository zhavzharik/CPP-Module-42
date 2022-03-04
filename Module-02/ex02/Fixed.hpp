#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# define EPSILON 1.0e-7

class Fixed
{
private:

	int					_fixedPointNumber;
	static const int	_numberBits;

public:

	Fixed( void );
	Fixed( int const n );
	Fixed( float const m );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );

	bool	operator>(Fixed const & rhs );
	bool	operator<( Fixed const & rhs );
	bool	operator>=( Fixed const & rhs );
	bool	operator<=( Fixed const & rhs );
	bool	operator==( Fixed const & rhs );
	bool	operator!=( Fixed const & rhs );

	Fixed	operator+( Fixed const & rhs );
	Fixed	operator-( Fixed const & rhs );
	Fixed	operator*( Fixed const & rhs );
	Fixed	operator/( Fixed const & rhs );

	Fixed &		operator++( void );
	const Fixed	operator++( int );
	Fixed &		operator--( void );
	const Fixed	operator--( int );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed &	min( Fixed & lhs, Fixed & rhs);
	static Fixed const &	min( Fixed const & lhs, Fixed const & rhs);
	static Fixed &	max( Fixed & lhs, Fixed & rhs);
	static Fixed const &	max( Fixed const & lhs, Fixed const & rhs);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i );

#endif

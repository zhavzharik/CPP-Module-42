#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
# include <iomanip>

# define GREEN "\033[32m"
# define CLEAR "\033[0m"

class Span
{
private:

	unsigned int 		_N;
	std::vector<int>	_vec;

public:
	Span();
	Span( unsigned int n );
	Span( Span const & src );
	~Span();

	Span & operator=( Span const & rhs );
	int & 	operator[]( unsigned int idx );

	void	addNumber(int nb);
	int		shortestSpan();
	int		longestSpan();

	class ImpossibleToAddException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NoDistanceException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class IndexOutOfBoundsException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	template< typename T >
	void	addNumber(T begin, T end )
	{
		unsigned long d = std::distance(begin, end);

		if (this->_vec.size() >= static_cast<unsigned long>(std::distance(begin, end)))
			throw ImpossibleToAddException();
		for (std::vector<int>::iterator it = begin; it != end; it++)
		{
			if (this->_vec.size() == this->_N && d > 0 )
				throw ImpossibleToAddException();
			this->_vec.push_back(*it);
			d--;
		}
	}
};

void	decor_text(std::string text, std::string color, int nb);


#endif

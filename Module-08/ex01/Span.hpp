#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>

class Span
{
private:

	unsigned int N;

protected:

	std::vector<int>	vec;

public:
	Span();
	Span( unsigned int n );
	Span( Span const & src );
	~Span();

	Span & operator=( Span const & rhs );

	void	addNumber(int nb);
	int		findShortestSpan();
	int		findLongestSpan();
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
};




#endif

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span( unsigned int n ) : N(n) {}

Span::Span( Span const & src )
{
	this->N = src.N;
	this->vec = src.vec;
	return;
}

Span::~Span(){}

Span & Span::operator=( Span const & rhs )
{
	this->N = rhs.N;
	this->vec = rhs.vec;
	return *this;
}

void	Span::addNumber(int nb) //rewrite
{
	if (vec.size() == this->N)
		throw "Immpossible to add number!";
	else
		this->vec.push_back(nb);
}

int		Span::findShortestSpan() //rewrite
{
	int	res;
	if (vec.size() < 2)
	{
		throw NoDistanceException();
	}
	else
	{
		std::vector<int>::iterator	it = this->vec.begin();
		std::vector<int>::iterator	ite = this->vec.end();
		res = this->longestSpan();
		for (*it; *it != *(ite - 1); ++*it)
			if (abs(*it - *(it + 1)) < res)
				res = abs(*it - *(it + 1));
	}
	return res;
}

int		Span::findLongestSpan() //rewrite
{
	std::vector<int>::iterator min_nb;
	std::vector<int>::iterator max_nb;
	if (vec.size() < 2)
	{
		throw NoDistanceException();
	}
	else
	{
		min_nb = std::min_element(this->vec.begin(), this->vec.end());
		max_nb = std::max_element(this->vec.begin(), this->vec.end());

	}
	return *max_nb - *min_nb;
}

int		Span::shortestSpan() //rewrite
{
	int res;
	try
	{
		res = this->findShortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return res;
}

int		Span::longestSpan()
{
	int res;
	try
	{
		res = this->findLongestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return res;
}

const char* Span::ImpossibleToAddException::what() const throw()
{
	return "Immpossible to add number!";
}

const char* Span::NoDistanceException::what() const throw()
{
	return "Immpossible to find distance!";
}

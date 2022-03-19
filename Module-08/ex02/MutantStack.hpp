#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <string>
# include <algorithm>
# include <list>
# include <iomanip>

# define GREEN "\033[32m"
# define CLEAR "\033[0m"

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack< T, Container >
{

public:
	MutantStack() {}
	MutantStack( MutantStack< T, Container > const & src) { *this = src; }
	virtual ~MutantStack() {}

	MutantStack & operator=( MutantStack< T, Container > const & rhs)
	{
		*this = rhs;
		return *this;
	}

	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end();}

	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend();}

};

void	decor_text(std::string text, std::string color, int nb)
{
	int f;
	if (static_cast<unsigned long>(nb) > text.size())
		f = (nb - text.size()) / 2;
	else
		f = 0;
	std::cout << color << std::setfill('*') << std::setw(nb) << std::endl << CLEAR << std::endl;
	std::cout << color << std::setfill(' ') << std::setw(f + text.size()) << text << CLEAR;
	std::cout << color << std::setfill('*') << std::setw(nb) << std::endl << CLEAR << std::endl;
}



#endif

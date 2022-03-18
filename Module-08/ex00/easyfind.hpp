#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>
# include <vector>
# include <iomanip>

# define GREEN "\033[32m"
# define CLEAR "\033[0m"

template< typename T >
int easyfind(T & array, int nb)
{
	typename T::iterator	it;

	it = std::find(array.begin(), array.end(), nb);
	if ( it == array.end())
		throw "This integer is not found!";
	return *it;
}

void	displayInt( int i)
{
	std::cout << i << " ";
}

void	decor_text(std::string text, std::string color, int nb)
{
	std::cout << color << std::setfill('*') << std::setw(nb) << std::endl << CLEAR << std::endl;
	std::cout << color << std::setfill(' ') << std::setw((text.size() + (nb / 7))) << text << CLEAR;
	std::cout << color << std::setfill('*') << std::setw(nb) << std::endl << CLEAR << std::endl;
}


#endif

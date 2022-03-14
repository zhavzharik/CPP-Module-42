#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>
# include <vector>

template< typename T >
int easyfind(T & array, int nb)
{
	typename T::const_iterator	it;
	
	it = std::find(array.begin(), array.end(), nb);
	if ( it == array.end())
		throw "This integer is not found!";
	return *it;
}

void	displayInt( int i)
{
	std::cout << i << " ";
}



#endif
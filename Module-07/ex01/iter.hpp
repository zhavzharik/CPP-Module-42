#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T >
void	display( T & x)
{
	std::cout << x << " ";
	return;
}

template< typename T >
void	increment( T & x)
{
	std::cout << x + 1 << " ";
	return;
}

template< typename T >
void	iter(T * address, int length, void (*func)(T & x) )
{
	int	i = 0;

	while (i < length)
	{
		func(address[i]);
		i++;
	}
	return;	
}

#endif
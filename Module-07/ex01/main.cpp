#include "iter.hpp"
#include "Test.hpp"

int	main( void )
{
	int	array[] = {21, 42, 35, 78, 54, 7, 888};
	const char str[] = "Hello, World!";
	Test	test[11];

	iter(array, 7, display);
	std::cout << std::endl;
	iter(array, 7, increment);
	std::cout << std::endl;

	iter(str, 14, display);
	std::cout << std::endl;

	iter(test, 11, display);
	std::cout << std::endl;
	iter(test, 11, increment);
	std::cout << std::endl;
	

	return 0;
}
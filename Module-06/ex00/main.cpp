#include "Convert.hpp"

int	main( int argc, char **argv)
{
	if (argc != 2)
		std::cout << "The wrong number of arguments! The program takes one parameter!" << std::endl;
	else
	{
		Convert inputValue(argv[1]);
		
		inputValue.displayChar();
		inputValue.displayInt();
		inputValue.displayFloat();
		inputValue.displayDouble();
	}
	return 0;
}
#include "Convert.hpp"

int	main( int argc, char **argv)
{
	if (argc != 2)
		std::cout << "The wrong number of arguments! The program takes one parameter!" << std::endl;
	else
	{
		Convert inputValue(argv[1]);
		try
		{
			inputValue.getValue();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error! " << e.what() << std::endl;
			return -1;
		}
		try
		{
			char ch = inputValue.toChar();
			std::cout << "char: '" << ch << "'" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "char: " << e.what() << std::endl;
		}
		try
		{
			int x = inputValue.toInt();
			std::cout << "int: " << x << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "int: " << e.what() << std::endl;
		}
		float f = inputValue.toFloat();
		if (f - static_cast<int>(f) != (float)0)
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
		double	d = inputValue.toDouble();
		if (d - static_cast<int>(d) != (double)0)
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: " << d << ".0" << std::endl;	
	}
	return 0;
}
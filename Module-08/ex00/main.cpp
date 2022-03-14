#include "easyfind.hpp"

int	main()
{
	std::list<int>	lst;
	int	nb;

	lst.push_back(21);
	lst.push_back(42);
	lst.push_back(15);
	lst.push_back(48);
	lst.push_back(31);
	lst.push_back(75);
	lst.push_back(99);

	std::cout << "***** List of integers ******" << std::endl;
	for_each(lst.begin(), lst.end(), displayInt);

	std::cout << std::endl << "****** Try to find 48 ******" << std::endl;
	try
	{
		nb = easyfind(lst, 48);
		std::cout << "Found " << nb << "!";
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
	}
	std::cout << std::endl << "****** Try to find 100 ******" << std::endl;
	try
	{
		nb = easyfind(lst, 100);
		std::cout << "Found " << nb << "!";
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
	}

	std::vector<int>	vec;
	
	vec.push_back(12);
	vec.push_back(24);
	vec.push_back(51);
	vec.push_back(84);
	vec.push_back(13);
	vec.push_back(57);
	vec.push_back(99);

	std::cout << std::endl << "****** Vector of integers ******" << std::endl;
	for_each(vec.begin(), vec.end(), displayInt);

	std::cout << std::endl << "****** Try to find 13 *******" << std::endl;
	try
	{
		nb = easyfind(vec, 13);
		std::cout << "Found " << nb << "!";
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
	}
	std::cout << std::endl << "***** Try to find 100 *****" << std::endl;
	try
	{
		nb = easyfind(vec, 100);
		std::cout << "Found " << nb << "!"  << std::endl;
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
	}
	
	return 0;

}
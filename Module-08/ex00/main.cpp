#include "easyfind.hpp"

int	main()
{
	int width = 35;
	std::list<int>	lst;
	int	nb;

	lst.push_back(21);
	lst.push_back(42);
	lst.push_back(15);
	lst.push_back(48);
	lst.push_back(31);
	lst.push_back(75);
	lst.push_back(99);

	decor_text("List of integers", GREEN, width);
	for_each(lst.begin(), lst.end(), displayInt);

	decor_text("Try to find 48", GREEN, width);
	try
	{
		nb = easyfind(lst, 48);
		std::cout << "Found " << nb << "!";
	}
	catch(char const * err)
	{
		std::cerr << err;
	}

	decor_text("Try to find 100", GREEN, width);
	try
	{
		nb = easyfind(lst, 100);
		std::cout << "Found " << nb << "!";
	}
	catch(char const * err)
	{
		std::cerr << err;
	}

	std::vector<int>	vec;

	vec.push_back(12);
	vec.push_back(24);
	vec.push_back(51);
	vec.push_back(84);
	vec.push_back(13);
	vec.push_back(57);
	vec.push_back(99);

	decor_text("Vector of integers", GREEN, width);
	for_each(vec.begin(), vec.end(), displayInt);

	decor_text("Try to find 13", GREEN, width);
	try
	{
		nb = easyfind(vec, 13);
		std::cout << "Found " << nb << "!";
	}
	catch(char const * err)
	{
		std::cerr << err << std::endl;
	}

	decor_text("Try to find 100", GREEN, width);
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

#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 50
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 100;
		numbers.setArray(value, i);
		mirror[i] = value;
	}
	std::cout << "********** Object of class Array with the random values **********" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl << std::endl;

	std::cout << "********** Array of integers with the same values **********" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << mirror[i] << " ";
	std::cout << std::endl << std::endl;

	Array<int> tmp(MAX_VAL);
	tmp = numbers;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << tmp.getArray(i) << " ";
	std::cout << std::endl << std::endl;

	Array<int> test(tmp);
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << test.getArray(i) << " ";
	std::cout << std::endl << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << "********** Trying to set value \"100\" at index -2 **********" << std::endl;
	try
	{
		numbers[-2] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "********** Trying to set value \"100\" at index MAX_VAL **********" << std::endl;
	try
	{
		numbers[MAX_VAL] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "********** Trying to set value \"1000\" at index 0 and 1 **********" << std::endl;
	try
	{
		numbers[0] = 1000;
		numbers.setArray(1000, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl << std::endl;

	delete [] mirror;

	return 0;
}
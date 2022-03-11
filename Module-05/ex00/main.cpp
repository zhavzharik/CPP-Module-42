#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "*************************" << std::endl;
		std::cout << "Try to create Jim (grade 3) and increment 3 times." << std::endl;
		Bureaucrat	x = Bureaucrat("Jim", 3);
		std::cout << x;
		x.incrementGrade();
		std::cout << x;
		x.incrementGrade();
		std::cout << x;
		x.incrementGrade();
		std::cout << x;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		std::cout << "Try to create Bob (grade 153)." << std::endl;
		Bureaucrat	y = Bureaucrat("Bob", 153);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		std::cout << "Try to create Bob (grade 0)." << std::endl;
		Bureaucrat	y = Bureaucrat("Bob", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		std::cout << "Try to create Jim (grade 148) and decrement 3 times." << std::endl;
		Bureaucrat	x = Bureaucrat("Jim", 148);
		std::cout << x;
		x.decrementGrade();
		std::cout << x;
		x.decrementGrade();
		std::cout << x;
		x.decrementGrade();
		std::cout << x;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
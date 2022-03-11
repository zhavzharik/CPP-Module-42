#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "*************************" << std::endl;
		Bureaucrat	x = Bureaucrat("Jim", 3);
		std::cout << x;
		Form		y = Form("S-21", 50, 50);
		std::cout << y << std::endl;
		std::cout << "Jim tries to sign form." << std::endl;
		x.signForm(y);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		Bureaucrat	x = Bureaucrat("Bob", 51);
		std::cout << x;
		Form		y = Form("S-211", 50, 50);
		std::cout << y << std::endl;
		std::cout << "Bob tries to sign form." << std::endl;
		x.signForm(y);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		Bureaucrat	x = Bureaucrat("Bob", 51);
		std::cout << x;
		Form		y = Form("S-211", 50, 50);
		std::cout << y << std::endl;
		std::cout << "Increment Bob's grade." << std::endl;
		x.incrementGrade();
		std::cout << x;
		std::cout << "Bob tries to sign form." << std::endl;
		x.signForm(y);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		std::cout << "Try to create form with grade required to sign in amount of 200." << std::endl;
		Form		y = Form("S-211", 200, 50);
		std::cout << y << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "*************************" << std::endl;
		std::cout << "Try to create form with grade required to execute in amount of 0." << std::endl;
		Form		y = Form("S-211", 100, 0);
		std::cout << y << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}
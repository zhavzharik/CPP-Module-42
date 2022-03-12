#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form*	rrf = NULL;
	Bureaucrat	jim = Bureaucrat("Jim", 120);
	Bureaucrat	bob = Bureaucrat("Bob", 26);

	std::cout << jim << std::endl;
	std::cout << bob << std::endl;
	try
	{
		std::cout << "************** ShrubberyCreationForm **************" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Ostap");
		std::cout << *rrf << std::endl << std::endl;
		std::cout << "Bob tries to sign form." << std::endl;
		rrf->beSigned(bob);
		std::cout << *rrf << std::endl << std::endl;
		std::cout << "Jim tries to execute form." << std::endl;
		rrf->execute(jim);
		std::cout << *rrf << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "************** RobotomyRequestForm **************" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl << std::endl;
		std::cout << "Bob tries to sign form." << std::endl;
		rrf->beSigned(bob);
		std::cout << *rrf << std::endl << std::endl;
		std::cout << "Jim tries to execute form." << std::endl;
		rrf->execute(jim);
		std::cout << *rrf << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "************** PresidentialPardonForm **************" << std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "Ostap Bender");
		std::cout << *rrf << std::endl << std::endl;
		std::cout << "Bob tries to sign form." << std::endl;
		rrf->beSigned(bob);
		std::cout << *rrf << std::endl << std::endl;
		std::cout << "Jim tries to execute form." << std::endl;
		rrf->execute(jim);
		std::cout << *rrf << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "************** NoNameForm **************" << std::endl;
		rrf = someRandomIntern.makeForm("no name", "target");
		std::cout << *rrf << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	return 0;
}
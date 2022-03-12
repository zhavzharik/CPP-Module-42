#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		std::cout << "************** ShrubberyCreationForm **************" << std::endl;
		Bureaucrat	jim = Bureaucrat("Jim", 140);
		std::cout << jim << std::endl;
		Bureaucrat	bob = Bureaucrat("Bob", 130);
		std::cout << bob << std::endl;
		ShrubberyCreationForm form1 = ShrubberyCreationForm("S-21");
		std::cout << form1 << std::endl;
		std::cout << "Bob tries to execute form." << std::endl;
		bob.executeForm(form1);
		std::cout << "Jim tries to sign form." << std::endl;
		jim.signForm(form1);
		std::cout << "Bob tries to execute form." << std::endl;
		bob.executeForm(form1);
		std::cout << "Jim tries to execute form." << std::endl;
		jim.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "************** RobotomyRequestForm **************" << std::endl;
		Bureaucrat	jim = Bureaucrat("Jim", 60);
		std::cout << jim << std::endl;
		Bureaucrat	bob = Bureaucrat("Bob", 40);
		std::cout << bob << std::endl;
		RobotomyRequestForm form2 = RobotomyRequestForm("R-21");
		std::cout << form2 << std::endl;
		std::cout << "Bob tries to execute form." << std::endl;
		bob.executeForm(form2);
		std::cout << "Jim tries to sign form." << std::endl;
		jim.signForm(form2);
		std::cout << "Bob tries to execute form." << std::endl;
		bob.executeForm(form2);
		std::cout << "Jim tries to execute form." << std::endl;
		jim.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "************** PresidentialPardonForm **************" << std::endl;
		Bureaucrat	jim = Bureaucrat("Jim", 20);
		std::cout << jim << std::endl;
		Bureaucrat	bob = Bureaucrat("Bob", 3);
		std::cout << bob << std::endl;
		PresidentialPardonForm form2 = PresidentialPardonForm("P-21");
		std::cout << form2 << std::endl;
		std::cout << "Bob tries to execute form." << std::endl;
		bob.executeForm(form2);
		std::cout << "Jim tries to sign form." << std::endl;
		jim.signForm(form2);
		std::cout << "Bob tries to execute form." << std::endl;
		bob.executeForm(form2);
		std::cout << "Jim tries to execute form." << std::endl;
		jim.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
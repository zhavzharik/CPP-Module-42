#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( Intern const & src )
{
	(void)src;
	return;
}

Intern::~Intern() {}

Intern & Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

Form* Intern::makeForm( std::string formName, std::string formTarget )
{
	int i = 0;
	Form* fff = NULL;

	std::string	forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	while (i < 3 && forms[i] != formName)
		++i;
	switch ( i )
	{
	case 0:
		fff = new ShrubberyCreationForm(formTarget);
		break;
	case 1:
		fff = new RobotomyRequestForm(formTarget);
		break;
	case 2:
		fff = new PresidentialPardonForm(formTarget);
		break;
	default:
		throw FormIsNotCreatedException();
	}
	std::cout << "Intern creates " << *fff << std::endl;
	return fff;
}

const char* Intern::FormIsNotCreatedException::what() const throw()
{
	return "Intern couldn't create form!";
}
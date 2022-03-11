#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("bureaucrat")
{
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;

	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name), _grade(src._grade)
{
	return;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	_grade = rhs.getGrade();

	return *this;
}

std::string	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade( void )
{
	if ( _grade == 1 )
		throw GradeTooHighException();
	else
		_grade -= 1;
}

void	Bureaucrat::decrementGrade( void )
{
	if ( _grade == 150 )
		throw GradeTooLowException();
	else
		_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too high grade!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too low grade!";
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;

	return o;
}
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("Presidentialtarget")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form(target, 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form(src), _target(src._target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if ( !this->getIsSigned() )
		throw FormIsNotSignedException();
	else if ( this->getGradeExecute() < executor.getGrade() )
		throw GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return;
}
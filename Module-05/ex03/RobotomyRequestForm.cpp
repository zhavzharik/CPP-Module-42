#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Robotomytarget")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form(target, 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form(src), _target(src._target)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if ( !this->getIsSigned() )
		throw FormIsNotSignedException();
	else if ( this->getGradeExecute() < executor.getGrade() )
		throw GradeTooLowException();
	else
	{
		std::cout << "Drrrrrrrrrrrrrrrrrr" << std::endl;
		std::cout << "Schrrrrrrrrrrrrrrrr" << std::endl;
		std::cout << "Thrrrrrrrrrrrrrrrrr" << std::endl;
		std::cout << "Drrrrrrrrrrrrrrrrrr" << std::endl;
		std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
	}
	return;
}
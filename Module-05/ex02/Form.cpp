#include "Form.hpp"

Form::Form() : _name("form"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{
	return;
}

Form::Form(std::string name, const int gradeSign, const int gradeExecute) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();

	return;
}

Form::Form( Form const & src ) : _name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	return;
}

Form::~Form() {}

Form & Form::operator=( Form const & rhs )
{
	_isSigned = rhs.getIsSigned();

	return *this;
}

std::string	Form::getName( void ) const
{
	return this->_name;
}

bool		Form::getIsSigned( void ) const
{
	return this->_isSigned;
}

int			Form::getGradeSign( void ) const
{
	return this->_gradeSign;
}

int			Form::getGradeExecute( void ) const
{
	return this->_gradeExecute;
}

void		Form::beSigned( Bureaucrat & src )
{
	if (src.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	else
		this->_isSigned = true;

	return;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Too high grade!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Too low grade!";
}

const char* Form::FormIsNotSignedException::what() const throw()
{
	return "Not signed form!";
}

std::ostream &	operator<<(std::ostream & o, Form const & i )
{
	o << "Form: " << i.getName();
	o << ". Current status: " << i.getIsSigned() << " (Not signed = 0, signed = 1). "; 
	o << "Grade required to sign: " << i.getGradeSign();
	o << ". Grade required to execute: " << i.getGradeExecute();

	return o;
}
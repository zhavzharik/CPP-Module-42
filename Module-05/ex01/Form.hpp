#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeSign;
	const int			_gradeExecute;

public:

	Form();
	Form(std::string name, const int gradeSign, const int gradeExecute);
	Form( Form const & src );
	~Form();

	Form & operator=( Form const & rhs );

	std::string	getName( void ) const;
	bool		getIsSigned( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExecute( void ) const;
	void		beSigned( Bureaucrat & src );

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	

};

std::ostream &	operator<<(std::ostream & o, Form const & i );


#endif
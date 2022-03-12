#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:

	std::string	_target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm();

	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
	void execute( Bureaucrat const & executor ) const;
};


#endif
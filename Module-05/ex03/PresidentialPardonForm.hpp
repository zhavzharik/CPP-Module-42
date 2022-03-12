#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:

	std::string	_target;

public:

	PresidentialPardonForm();
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm();

	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
	void execute( Bureaucrat const & executor ) const;
};


#endif
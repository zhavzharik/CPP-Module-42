#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("Shrubberytarget")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form(target, 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form(src), _target(src._target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::ofstream o;

	if ( !this->getIsSigned() )
		throw FormIsNotSignedException();
	else if ( this->getGradeExecute() < executor.getGrade() )
		throw GradeTooLowException();
	else
	{
		o.open((this->_target + "_shrubbery").c_str());
		if (!o.is_open())
		{
			std::cerr << "File open error!" << std::endl;
			return;
		}
		else
		{
			o << "           ¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶" << std::endl;
			o << "          ¶     ¶¶        ¶" << std::endl;
			o << "        ¶¶¶                ¶¶¶¶¶¶¶" << std::endl;
			o << "        ¶                       ¶¶¶" << std::endl;
			o << "        ¶¶    ¶                   ¶" << std::endl;
			o << "      ¶¶¶    ¶¶¶¶¶¶¶¶¶            ¶¶¶" << std::endl;
			o << "      ¶¶      ¶¶¶¶¶        ¶¶       ¶¶ ¶¶" << std::endl;
			o << "     ¶¶¶¶¶¶               ¶¶  ¶ ¶¶   ¶¶¶¶¶¶" << std::endl;
			o << "   ¶¶¶  ¶¶¶¶  ¶¶¶         ¶¶¶¶¶¶¶    ¶¶   ¶¶¶" << std::endl;
			o << "   ¶      ¶¶¶ ¶ ¶  ¶  ¶ ¶¶¶                ¶¶¶" << std::endl;
			o << "   ¶        ¶ ¶ ¶¶¶¶¶¶¶¶¶¶ ¶¶                ¶¶" << std::endl;
			o << "   ¶¶    ¶¶¶¶ ¶ ¶¶¶ ¶¶¶¶ ¶ ¶¶¶¶¶¶¶¶¶¶        ¶¶" << std::endl;
			o << "  ¶¶¶¶   ¶¶¶¶¶¶¶¶   ¶¶¶ ¶  ¶¶¶    ¶¶¶¶      ¶¶¶" << std::endl;
			o << " ¶¶¶ ¶¶¶¶¶ ¶¶¶¶¶¶ ¶¶ ¶¶¶    ¶¶¶¶¶¶¶¶        ¶¶¶" << std::endl;
			o << "¶¶     ¶¶¶  ¶¶ ¶¶¶¶¶  ¶¶   ¶¶¶¶¶¶ ¶     ¶¶¶   ¶¶" << std::endl;
			o << "¶     ¶¶¶   ¶ ¶ ¶¶¶   ¶¶ ¶¶  ¶  ¶¶¶¶¶  ¶¶¶     ¶¶" << std::endl;
			o << "¶¶   ¶¶¶¶¶¶ ¶¶¶   ¶    ¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶    ¶" << std::endl;
			o << " ¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶  ¶¶  ¶¶¶¶¶¶¶  ¶¶¶¶  ¶    ¶¶¶" << std::endl;
			o << "   ¶¶¶¶     ¶ ¶¶¶      ¶¶   ¶¶     ¶¶¶         ¶" << std::endl;
			o << "            ¶¶¶  ¶¶     ¶   ¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶   ¶¶" << std::endl;
			o << "   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶ ¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
			o << "   ¶     ¶¶¶¶¶   ¶¶¶ ¶¶  ¶¶¶¶   ¶¶¶        ¶¶¶" << std::endl;
			o << "   ¶¶    ¶¶       ¶¶ ¶¶   ¶¶¶¶ ¶¶¶¶¶     ¶¶¶" << std::endl;
			o << "   ¶     ¶   ¶ ¶¶¶ ¶ ¶¶   ¶¶ ¶¶¶  ¶¶¶    ¶¶" << std::endl;
			o << "   ¶¶       ¶¶¶¶  ¶¶       ¶        ¶¶¶¶¶¶" << std::endl;
			o << "   ¶  ¶¶¶¶¶¶¶     ¶   ¶¶¶  ¶          ¶¶¶" << std::endl;
			o << "   ¶¶¶¶¶¶¶¶¶     ¶¶  ¶¶¶¶¶ ¶¶" << std::endl;
			o << "                ¶¶   ¶¶¶¶   ¶¶" << std::endl;
			o << "               ¶¶    ¶¶¶¶   ¶¶" << std::endl;
			o << "            ¶¶¶¶     ¶¶     ¶¶" << std::endl;
			o << "            ¶¶       ¶¶     ¶¶" << std::endl;
			o << "          ¶¶¶   ¶¶   ¶¶     ¶¶" << std::endl;
			o << "        ¶¶¶¶    ¶¶   ¶      ¶¶" << std::endl;
			o << "       ¶¶¶¶¶    ¶      ¶¶    ¶¶" << std::endl;
			o << "     ¶¶¶¶¶¶¶¶ ¶¶¶ ¶    ¶¶ ¶   ¶¶" << std::endl;
			o << "   ¶¶¶¶¶¶¶¶¶¶¶K¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
			o << "   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶    ¶¶¶¶¶ ¶¶¶" << std::endl;
		}
		o.close();
	}
	return;
}
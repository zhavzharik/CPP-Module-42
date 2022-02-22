#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <stdlib.h>
# include <string>
# include <iomanip>

class PhoneBook
{
private:

	int			_counter;
	Contact*	_contacts;
	int			_index;
	std::string	_answer;
	int			_userInput;
	int			_flag;

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	start( void);
	void	add( void );
	void	search( void );
	void	exit_program( void );
	void	requestIndex( void );
};


#endif


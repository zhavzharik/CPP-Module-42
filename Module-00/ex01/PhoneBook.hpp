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
	int			_amount;
	Contact		_contacts[8];
	int			_index;
	std::string	_answer;
	std::string	_userInput;
	int			_res;
	bool		_flag;
	int			_startFlag;

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


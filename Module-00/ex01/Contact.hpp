#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:

	std::string	_fName;
	std::string	_lName;
	std::string	_nName;
	std::string	_phNb;
	std::string	_secret;
	int			_indx;

	void	showColumn( std::string str, int flag );

public:

	Contact( void );
	~Contact( void );

	void	setIndx( int v);
	void	setContact( void );
	void	show( void );
	void	displayContact( void );
};


#endif


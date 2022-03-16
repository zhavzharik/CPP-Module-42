#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>

class Convert
{
private:

	double		_value;
	std::string	_str;

public:

	Convert();
	Convert( std::string const & str );
	Convert( Convert const & src );
	~Convert();

	Convert & operator=(Convert const & rhs );

	double	getValue() const;
	std::string getStr() const;

	char	toChar();
	int		toInt();
	float	toFloat();
	double	toDouble();

	void	displayChar();
	void	displayInt();
	void	displayFloat();
	void	displayDouble();

	class ImpossibleException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class NonDisplayableException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

};


#endif

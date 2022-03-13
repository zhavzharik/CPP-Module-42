#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert( std::string const & str ) : _value(std::atof(str.c_str())) {}

Convert::Convert( Convert const & src ) : _value(src._value) {}

Convert::~Convert() {}

Convert & Convert::operator=(Convert const & rhs )
{
	this->_value = rhs._value;
	return *this;
}

double	Convert::getValue() const
{
	return this->_value;
}

char	Convert::toChar()
{
	char value = static_cast<char>(getValue());

	if (_value == std::numeric_limits<double>::infinity() || _value == -std::numeric_limits<double>::infinity() || std::isnan(_value))
		throw ImpossibleException();
	else if (!(std::isprint(value)))
		throw NonDisplayableException();
	return value;
}

int	Convert::toInt()
{
	int value = static_cast<int>(getValue());

	if (_value == std::numeric_limits<double>::infinity() || _value == -std::numeric_limits<double>::infinity() || std::isnan(_value))
		throw ImpossibleException();
	
	return value;
}

float	Convert::toFloat()
{
	return static_cast<float>(getValue());
}

double	Convert::toDouble()
{
	return static_cast<double>(getValue());
}

void Convert::displayChar()
{
	try
	{
		char ch = this->toChar();
		std::cout << "char: '" << ch << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: " << e.what() << std::endl;
	}
	return;
}

void	Convert::displayInt()
{
	try
	{
		int x = this->toInt();
		std::cout << "int: " << x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: " << e.what() << std::endl;
	}
	return;
}

void	Convert::displayFloat()
{
	float f = this->toFloat();
	if (f - static_cast<int>(f) != (float)0)
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: " << f << ".0f" << std::endl;
	return;
}

void	Convert::displayDouble()
{
	double	d = this->toDouble();
	if (d - static_cast<int>(d) != (double)0)
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
	return;
}

const char* Convert::ImpossibleException::what() const throw()
{
	return "impossible";
}

const char* Convert::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}
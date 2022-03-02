#include "Karen.hpp"

Karen::Karen()
{
	this->arrayFunc[0] = &Karen::debug;
	this->arrayFunc[1] = &Karen::info;
	this->arrayFunc[2] = &Karen::warning;
	this->arrayFunc[3] = &Karen::error;
	this->arrayFunc[4] = &Karen::message;
}

Karen::~Karen(){}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::message( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain( std::string level)
{
	int i = 0;
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && levels[i] != level)
		++i;
	switch (i)
	{
	case 0:
		(this->*arrayFunc[0])();
		(this->*arrayFunc[1])();
		(this->*arrayFunc[2])();
		(this->*arrayFunc[3])();
		break;
	case 1:
		(this->*arrayFunc[1])();
		(this->*arrayFunc[2])();
		(this->*arrayFunc[3])();
		break;
	case 2:
		(this->*arrayFunc[2])();
		(this->*arrayFunc[3])();
		break;
	case 3:
		(this->*arrayFunc[3])();
		break;
	default:
		(this->*arrayFunc[4])();
		break;
	}
}


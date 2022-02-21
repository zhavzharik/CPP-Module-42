#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}

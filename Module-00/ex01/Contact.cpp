#include "Contact.hpp"

Contact::Contact( void ) : foo( 0 )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::bar( void ) const{
	std::cout << "Member function bar called" << std::endl;
	return;
}


/*
Contact::Contact( void )
{
	std::cout << "Constructor called" << std::endl;
	Contact::_nbInst += 1;
	return;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
	Contact::_nbInst -= 1;
	return;
}

int	Contact::getNbInst( void )
{
	return Contact::_nbInst;
}

int	Contact::_nbInst = 0;



int	Contact::getFoo( void ) const{

	return this->_foo;
}

int	Contact::compare( Contact * other) const {

	if (this->_foo < other->getFoo() )
		return -1;
	else if (this->_foo > other->getFoo() )
		return 1;
	return 0;
}


void	Contact::setFoo( int v){

	if (v >= 0)
		this->_foo = v;

	return;
}



Contact::Contact(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
}

Contact::Contact(float const f) : pi( f ), qd( 42 )
{
	std::cout << "Constructor called" << std::endl;

	return;
}


Contact::Contact( void )
{
	std::cout << "Constructor called" << std::endl;
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::publicBar( void ) const
{
	std::cout << "Member function publicBar called " << std::endl;

	return;
}

void	Contact::_privateBar( void ) const
{
	std::cout << "Member function _privateBar called " << std::endl;

	return;
}


void	Contact::bar( void ) const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return;
}
*/

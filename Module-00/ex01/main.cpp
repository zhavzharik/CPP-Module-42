#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	Contact		instance;
	Contact *	instancep = &instance;

	int			Contact::*p = NULL;
	void		(Contact::*f)(void) const;

	p = &Contact::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Contact::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}

/*
void	f0( void )
{
	Contact instance;
	std::cout << "Number of instances : " << Contact::getNbInst() << std::endl;
	return;
}

void	f1( void )
{
	Contact instance;
	std::cout << "Number of instances : " << Contact::getNbInst() << std::endl;
	f0();
	return;
}

int	main()
{
	std::cout << "Number of instances : " << Contact::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Contact::getNbInst() << std::endl;

	return 0;
}


int	main()
{
	Contact	instance1( 42 );
	Contact	instance2( 42 );

	if ( &instance1 == &instance1 )
		std::cout << "instance 1 and instance1 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance1 are not physically equal" << std::endl;

	if ( &instance1 == &instance2 )
		std::cout << "instance 1 and instance2 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance2 are not physically equal" << std::endl;

	if ( instance1.compare( &instance1 ) == 0)
		std::cout << "instance 1 and instance1 are structuraly equal" << std::endl;
	else
		std::cout << "instance 1 and instance1 are not structurally equal" << std::endl;

	if ( instance1.compare( &instance2 ) == 0)
		std::cout << "instance 1 and instance2 are structuraly equal" << std::endl;
	else
		std::cout << "instance 1 and instance2 are not structurally equal" << std::endl;


	PhoneBook	instance;
	Contact		instance1( 'a', 42, 4.2f );
	Contact		instance2( 'z', 13, 3.14f );

	Contact	instance;

	instance.setFoo( 42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	instance.setFoo( -42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;


	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std:: endl;
	instance.publicBar();

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();


	return 0;
}
*/

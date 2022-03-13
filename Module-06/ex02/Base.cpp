#include "Base.hpp"

Base *	generate( void )
{
	std::srand(std::time(0));
	int randomVariable = std::rand() % 3;
	switch (randomVariable)
	{
		case 0:
			std::cout << "Create class A." << std::endl;
			return new A();
		case 1:
			std::cout << "Create class B." << std::endl;
			return new B();
		case 2:
			std::cout << "Create class C." << std::endl;
			return new C();
		default:
			std::cout << "Create class Base." << std::endl;
			return new Base();
	}
}

void	identify( Base* p )
{
	A*	ptrA = dynamic_cast<A*>(p);
	if (ptrA)
		std::cout << "The actual type of the object pointed to by p: A." << std::endl;
	B*	ptrB = dynamic_cast<B*>(p);
	if (ptrB)
		std::cout << "The actual type of the object pointed to by p: B." << std::endl;
	C*	ptrC = dynamic_cast<C*>(p);
	if (ptrC)
		std::cout << "The actual type of the object pointed to by p: C." << std::endl;
}

void	identify( Base& p )
{
	try
	{
		A& refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "The actual type of the object pointed to by p: A." << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B& refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "The actual type of the object pointed to by p: B." << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C& refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "The actual type of the object pointed to by p: C." << std::endl;
	}
	catch(const std::exception& e) {}	 
}
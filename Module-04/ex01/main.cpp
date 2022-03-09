#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int	main()
{
	int	N = 10;
	int	i = 0;

	std::cout << std::endl << "********* Right animals *********" << std::endl << std::endl;

	Animal* animals[N];
	while (i < N)
	{
		std::cout << std::endl;
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < N)
	{
		std::cout << "Type of "<< i + 1 << " object is " << animals[i]->getType() << " " << std::endl;
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < N)
	{
		animals[i]->makeSound();
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < N)
	{
		std::cout << std::endl;
		delete animals[i];
		i++;
	}

	std::cout << std::endl << "********* Wrong animals *********" << std::endl;

	WrongAnimal* wrong_animals[N];
	i = 0;
	while (i < N)
	{
		std::cout << std::endl;
		wrong_animals[i] = new WrongCat();
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < N)
	{
		std::cout << "Type of "<< i + 1 << " object is " << wrong_animals[i]->getType() << " " << std::endl;
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < N)
	{
		wrong_animals[i]->makeSound();
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < N)
	{
		delete wrong_animals[i];
		i++;
	}

	return 0;
}

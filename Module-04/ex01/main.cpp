#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int	main()
{

	std::cout << std::endl << "********* Array of animals *********" << std::endl;

	int	N = 10;
	int	i = 0;

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

	std::cout << std::endl << "********* Copy constructor *********" << std::endl;

	std::cout << "Case 1. Dog copy." << std::endl;
	Dog dog = Dog();
	Dog dog_copy = dog;

	std::cout << dog.getType() << " " << std::endl;
	std::cout << dog_copy.getType() << " " << std::endl;
	dog.makeSound();
	dog_copy.makeSound();

	dog.printIdea();
	dog_copy.printIdea();

	std::cout << "Case 2. Cat copy." << std::endl;
	Cat cat = Cat();
	Cat cat_copy = cat;

	std::cout << cat.getType() << " " << std::endl;
	std::cout << cat_copy.getType() << " " << std::endl;
	cat.makeSound();
	cat_copy.makeSound();

	cat.printIdea();
	cat_copy.printIdea();

	std::cout << std::endl << "********* Case from subject *********" << std::endl;

	const Animal* j1 = new Dog();
	const Animal* i1 = new Cat();
	delete j1;
	delete i1;

	return 0;
}
	

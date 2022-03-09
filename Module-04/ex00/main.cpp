#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main()
{
	std::cout << std::endl << "********* Right animals *********" << std::endl << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl << "********* Wrong animals *********" << std::endl << std::endl;

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();

	std::cout << w_i->getType() << " " << std::endl;
	w_i->makeSound();
	w_meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* w_j;

	w_j = w_i;
	std::cout << w_j->getType() << " " << std::endl;
	w_j->makeSound();
	w_meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* w_a = new WrongCat();

	std::cout << w_a->getType() << " " << std::endl;
	w_a->makeSound();
	std::cout << std::endl;

	delete w_i;
	delete w_a;
	delete w_meta;


	return 0;
}

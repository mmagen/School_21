#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void) {
	const Animal* zoo[4];

	for (int i = 0; i < 2; i++)
		zoo[i] = new Cat();

	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		zoo[i] = new Dog();

	std::cout << std::endl;
	Cat* cat = new Cat();

	std::cout << std::endl;
	for (int i = 0; i < 50; i++) {
		cat->setIdea(("idea: " + std::to_string(i)));
		std::cout << " " << cat->getIdea(i);
		std::cout << ", ";
		if (i % 10 == 0)
			std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	delete cat;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		delete zoo[i];
		std::cout << std::endl;
	}

	return 0;
}
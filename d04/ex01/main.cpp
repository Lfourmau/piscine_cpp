#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "-----INIT-----" << std::endl;
	Animal *animals[8] = {new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(),};

	std::cout << "-----DEEP COPY-----" << std::endl;
	std::cout << "Putting \"test\" in the first idea of the first animal" << std::endl;
	animals[0]->setIdea(0, "test");
	std::cout << "Putting \"test number 2\" in the first idea of the second animal" << std::endl;
	animals[1]->setIdea(0, "test number 2");
	std::cout << "idea 0 of animal 0 is " << animals[0]->getIdea(0) << std::endl;
	std::cout << "idea 0 of animal 1 is " << animals[1]->getIdea(0) << std::endl;

	std::cout << "-----DESTRUC-----" << std::endl;
	int i = -1;
	while (++i < 8)
		delete animals[i];
}
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "-----INIT-----" << std::endl;
	size_t num_animals = 4;
	size_t i = 0;
	Animal *animals[num_animals];
	for ( ; i < num_animals / 2; i++)
		animals[i] = new Dog;
	for ( ; i < num_animals; i++)
		animals[i] = new Cat;
	for (size_t j = 0; j < num_animals; j++)
		delete animals[j];

	std::cout << "-----ASSIGN OPERATOR-----" << std::endl;
	Dog *tst = new Dog();
	Dog *tst2 = new Dog();
	tst->setIdea(0, "I'm hungry");
	tst->setIdea(1, "I love beef");
	*tst2 = *tst;
	tst2->setIdea(1, "I love chicken");
	std::cout << "TST idea --> " << tst->getIdea(0) << " - " << tst->getIdea(1) << std::endl;
	std::cout << "TST2 idea --> " << tst2->getIdea(0) << " - " << tst2->getIdea(1) << std::endl;

	delete tst;
	delete tst2;
}
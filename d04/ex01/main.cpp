#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "-----INIT-----" << std::endl;
	size_t num_of_animal_type = 4;
	Animal *animals[num_of_animal_type * 2];
	(void)animals;
	for (size_t i = 0; i < num_of_animal_type; i++)
	{
		
	}

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
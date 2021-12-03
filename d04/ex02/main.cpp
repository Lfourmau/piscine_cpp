#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Dog chienchien;
	Cat chatchat;
	//Animal test;

	chienchien.makeSound();
	chatchat.makeSound();
	chienchien.setIdea(0, "Ouafouafouaf");
	std::cout << chienchien.getIdea(0) << std::endl;
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
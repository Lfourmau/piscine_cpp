#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "------ WRONG ANIMAL ------" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	std::cout << "------ ANIMAL ------" << std::endl;
	const Animal* meta2 = new Animal();
	const Animal* i2 = new Cat();
	const Animal* j2 = new Dog();
	std::cout << i2->getType() << " " << std::endl;
	std::cout << j2->getType() << " " << std::endl;
	j2->makeSound();
	i2->makeSound(); //will output the cat sound!
	meta2->makeSound();
	delete meta;
	delete i;
	delete meta2;
	delete i2;
	delete j2;
}
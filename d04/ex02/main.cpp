#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Dog chienchien;
	Cat chatchat;

	chienchien.makeSound();
	chatchat.makeSound();
	chienchien.setIdea(0, "Ouafouafouaf");
	std::cout << chienchien.getIdea(0) << std::endl;
}
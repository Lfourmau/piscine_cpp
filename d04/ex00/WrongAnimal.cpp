#include "WrongAnimal.hpp"

//Cannonic elements
WrongAnimal::WrongAnimal(void) : type("Original WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	*this = src;
	std::cout << "WrongAnimal copy cnstructor caled" << std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
	this->type = rhs.type;
	return (*this);
}
std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
void WrongAnimal::makeSound(void) const
{
	std ::cout << "This is the WrongAnimal sound" << std::endl;
}
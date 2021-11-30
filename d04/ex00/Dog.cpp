#include "Dog.hpp"

//Cannonic elements
Dog::Dog(void) : Animal::Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}
Dog::Dog(Dog const& src)
{
	*this = src;
	std::cout << "Dog copy constructor caled" << std::endl;
}
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}
Dog& Dog::operator=(Dog const& rhs)
{
	this->type = rhs.type;
	return (*this);
}
std::string Dog::getType(void) const
{
	return (this->type);
}
void Dog::makeSound(void) const
{
	std ::cout << "This is the dog sound" << std::endl;
}
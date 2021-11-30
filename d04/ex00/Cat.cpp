#include "Cat.hpp"

//Cannonic elements
Cat::Cat(void) : Animal::Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}
Cat::Cat(Cat const& src)
{
	*this = src;
	std::cout << "Cat copy constructor caled" << std::endl;
}
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}
Cat& Cat::operator=(Cat const& rhs)
{
	this->type = rhs.type;
	return (*this);
}
std::string Cat::getType(void) const
{
	return (this->type);
}
void Cat::makeSound(void) const
{
	std ::cout << "This is the cat sound" << std::endl;
}
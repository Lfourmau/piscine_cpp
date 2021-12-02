#include "Animal.hpp"

//Cannonic elements
Animal::Animal(void) : type("Original Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(Animal const& src)
{
	*this = src;
	std::cout << "Animal copy cnstructor caled" << std::endl;
}
Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator=(Animal const& rhs)
{
	std::cout << "Animal assignation operator" << std::endl;
	this->type = rhs.type;
	return (*this);
}
std::string Animal::getType(void) const
{
	return (this->type);
}
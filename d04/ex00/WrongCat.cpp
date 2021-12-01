#include "WrongCat.hpp"

//Cannonic elements
WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}
WrongCat::WrongCat(WrongCat const& src)
{
	*this = src;
	std::cout << "WrongCat copy constructor caled" << std::endl;
}
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
	this->type = rhs.type;
	return (*this);
}
std::string WrongCat::getType(void) const
{
	return (this->type);
}
void WrongCat::makeSound(void) const
{
	std ::cout << "This is the WrongCat sound" << std::endl;
}
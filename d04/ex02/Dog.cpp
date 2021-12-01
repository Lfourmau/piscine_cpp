#include "Dog.hpp"

//Cannonic elements
Dog::Dog(void) : Animal::Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}
Dog::Dog(Dog const& src)
{
	operator=(src);
	std::cout << "Dog copy constructor caled" << std::endl;
}
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete(this->brain);
}
Dog& Dog::operator=(Dog const& rhs)
{
	this->type = rhs.type;
	this->brain = new Brain();

	int i = -1;
	while (++i < 100)
		this->brain->ideas[i] = rhs.brain->ideas[i];

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

void Dog::setIdea(int id, std::string message)
{
	if (id > 100)
		return ;
	this->brain->ideas[id] = message;
}
std::string Dog::getIdea(int id)
{
	if (id < 0 || id > 100)
		return "bad index";
	return (this->brain->ideas[id]);
}
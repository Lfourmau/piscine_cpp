#include "Cat.hpp"

//Cannonic elements
Cat::Cat(void) : Animal::Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}
Cat::Cat(Cat const& src)
{
	operator=(src);
	this->brain = new Brain();
	std::cout << "Cat copy constructor caled" << std::endl;
}
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete(this->brain);
}
Cat& Cat::operator=(Cat const& rhs)
{
	std::cout << "Cat assignation operator" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain();

	int i = -1;
	while (++i < 100)
		this->brain->ideas[i] = rhs.brain->ideas[i];

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

void Cat::setIdea(int id, std::string message)
{
	if (id > 100)
		return ;
	this->brain->ideas[id] = message;
}
std::string Cat::getIdea(int id)
{
	if (id < 0 || id > 100)
		return "Bad index";
	return (this->brain->ideas[id]);
}
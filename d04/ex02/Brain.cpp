#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default brain constructor called" << std::endl;
}
Brain::Brain(Brain const& src)
{
	std::cout << "Copy brain constructor called" << std::endl;
	*this = src;
}
Brain::~Brain(void)
{
	std::cout << "Brain destrcutor called" << std::endl;
}
Brain& Brain::operator=(Brain const& rhs)
{
	std::cout << "Brain assignation operator called" << std::endl;
	(void)rhs;
	return (*this);
}
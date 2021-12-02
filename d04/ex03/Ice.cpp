#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}
Ice::Ice(std::string const& type) : AMateria(type)
{
	std::cout << "String Ice constructor called" << std::endl;
	//this->_type = type;
}
Ice::Ice(Ice const& src) : AMateria(src)
{
	operator=(src);
}
Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(Ice const& rhs)
{
	(void)rhs;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	std::cout << "Ice cloning" << std::endl;
	AMateria *tmp = new Ice();
	return (tmp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
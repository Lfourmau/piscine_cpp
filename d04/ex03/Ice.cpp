#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
	//this->_type = "Ice";
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


Ice& Ice::operator=(Ice const& rhs)
{
	(void)rhs;
	return (*this);
}
std::string const& Ice::getType() const
{
	return (this->_type);
}

AMateria *Ice::clone(void) const
{
	Ice *tmp = new (Ice);
	tmp->operator=(*this);
	return (tmp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}
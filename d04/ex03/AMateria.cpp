#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unknow")
{
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& src) : _type(src._type)
{
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Use function of AMateria called" << std::endl;
	(void)target;
}

AMateria& AMateria::operator=(AMateria& rhs)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	(void)rhs;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}
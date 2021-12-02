#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default cure constructor called" << std::endl;
}
Cure::Cure(std::string const& type) : AMateria(type)
{
	std::cout << "Default cure constructor called" << std::endl;
}
Cure::Cure(Cure const& src) : AMateria(src)
{
	operator=(src);
}
Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}


Cure& Cure::operator=(Cure const& rhs)
{
	(void)rhs;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	std::cout << "Cure cloning" << std::endl;
	AMateria *tmp = new Cure();
	return (tmp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heal " << target.getName() << "'s wounds *" << std::endl;
}
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default cure constructor called" << std::endl;
	this->type = "cure";
}
Cure::Cure(std::string const& type) : AMateria(type)
{
	std::cout << "Default cure constructor called" << std::endl;
	this->type = type;
}
Cure::Cure(Cure const& src) : AMateria(src)
{
	operator=(src);
}


Cure& Cure::operator=(Cure const& rhs)
{
	//assignation operator
	return (*this);
}
std::string const& Cure::getType() const
{
	return (this->type);
}

AMateria *Cure::clone(void) const
{
	Cure *tmp = new (Cure);
	tmp->operator=(*this);
	return (tmp);
}

void Cure::use(ICharacter& target)
{
	"* heal " << target.getName() << " wounds *";
}
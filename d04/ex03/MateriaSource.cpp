#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void) : _slot(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const& src)
{
	(void)src;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}
MateriaSource& MateriaSource::operator=(MateriaSource& rhs)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	this->_slot = rhs._slot;
	for (size_t i = 0; i < 4; i++)
		this->materiaSource[i] = rhs.materiaSource[i];
	return (*this);
}

void MateriaSource::inc_slot(void)
{
	if (this->_slot == 3)
		this->_slot = 0;
	else
		this->_slot++;
}

void MateriaSource::learnMateria(AMateria *m)
{
	this->materiaSource[this->_slot] = m;//maybe need to use a operator = in AMateria
	inc_slot();
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	if (type.compare("ice") && type.compare("cure"))
	{
		return (0);
	}
	else if (!type.compare("ice"))
	{
		Ice *ret = new Ice;
		return (ret);
	}
	else if (!type.compare("cure"))
	{
		Cure *ret = new Cure;
		return (ret);
	}
	return (0);
	//dont know what im doing
}
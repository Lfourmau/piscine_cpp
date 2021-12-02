#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const& src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
}
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}
MateriaSource& MateriaSource::operator=(MateriaSource& src)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
}
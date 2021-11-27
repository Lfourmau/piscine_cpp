#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) {};
DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	std::cout << "DiamondTrap construcor called" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
	std::cout << "DiamondTrap construcor called" << std::endl;
	operator=(src);
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs)
{
	(void)rhs;
	return (*this);
}
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
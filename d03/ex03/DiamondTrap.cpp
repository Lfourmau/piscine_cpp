#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) {};
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	std::cout << "DiamondTrap constructor " << name << " called" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	*this = src;
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
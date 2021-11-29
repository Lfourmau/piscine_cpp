#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) {};
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	ClapTrap::_hitpoint = FragTrap::_hitpoint;
	ClapTrap::_energy_points = ScavTrap::_energy_points;
	ClapTrap::_attack_damage = FragTrap::_attack_damage;
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
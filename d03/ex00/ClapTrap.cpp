#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoint(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Deonstructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout <<
		"ClapTrap " << this->_name 
		<< " attacks " << target 
		<< ", causing " << this->_attack_damage 
		<< " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_energy_points -= amount;
	std::cout << this->_name << " takes " << amount << " damages and have now " << this->_energy_points << "HP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy_points+= amount;
	std::cout << this->_name << " takes " << amount << " heal points and have now " << this->_energy_points << "HP" << std::endl;
}
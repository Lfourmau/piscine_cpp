#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {};
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoint = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap construcor called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "ScavTrap construcor called" << std::endl;
	operator=(src);
}
ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
	std::cout <<
		"ScavTrap " << this->_name 
		<< " attacks " << target 
		<< ", causing " << this->_attack_damage 
		<< " points of damage !" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << " ScavTrap have enterred in Gate keeper mode" << std::endl;
}
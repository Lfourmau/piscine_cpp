#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {};
ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoint(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name, int hitpoint, int energy_points, int attack_damage) : _name(name), _hitpoint(hitpoint), _energy_points(energy_points), _attack_damage(attack_damage)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(src);
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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
	if (this->_energy_points - amount >= 0)
		this->_energy_points -= amount;
	else
		this->_energy_points = 0;
	std::cout << this->_name << " takes " << amount << " damages and have now " << this->_energy_points << "HP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy_points+= amount;
	std::cout << this->_name << " takes " << amount << " heal points and have now " << this->_energy_points << "HP" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_attack_damage = rhs._attack_damage;
	this->_hitpoint = rhs._hitpoint;
	this->_energy_points = rhs._attack_damage;
	return (*this);
}
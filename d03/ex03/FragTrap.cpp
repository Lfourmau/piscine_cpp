#include "FragTrap.hpp"

FragTrap::FragTrap(void) {};
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoint = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap construcor called" << std::endl;
}
FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "FragTrap construcor called" << std::endl;
	operator=(src);
}
FragTrap& FragTrap::operator=(FragTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five !" << std::endl;
}
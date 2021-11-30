#include "FragTrap.hpp"

FragTrap::FragTrap(void) {};
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap construcor called" << std::endl;
}
FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "FragTrap construcor called" << std::endl;
	operator=(src);
}
void FragTrap::attack(std::string const& target)
{
	std::cout <<
		"FragTrap " << this->_name 
		<< " attacks " << target 
		<< ", causing " << this->_attack_damage 
		<< " points of damage !" << std::endl;
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
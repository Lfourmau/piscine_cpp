#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weaponPass) {};

HumanA::~HumanA(void) {};

void HumanA::attack(void)
{
	std::cout <<
		this->_name <<
		"attacks with his " <<
		this->weapon.getType() << std::endl;

}
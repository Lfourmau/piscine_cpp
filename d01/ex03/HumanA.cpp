#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponPass) : _name(name), weapon(weaponPass) {};

HumanA::~HumanA(void) {};

void HumanA::attack(void) const
{
	std::cout <<
		this->_name <<
		" attacks with his " <<
		this->weapon.getType() << std::endl;
}
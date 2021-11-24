#include "HumanB.hpp"

HumanB::HumanB(std::string name) :  weapon(NULL), _name(name) {};
HumanB::~HumanB(void) {};

void HumanB::attack(void)
{
	std::cout <<
		this->_name <<
		" attacks with his " <<
		this->weapon->getType() << std::endl;

}

void	HumanB::setWeapon(Weapon& weaponToset)
{
	this->weapon = &weaponToset;
}
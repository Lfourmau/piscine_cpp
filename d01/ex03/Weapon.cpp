#include "Weapon.hpp"

Weapon::Weapon(std::string weaponInit) : _type(weaponInit){};
Weapon::~Weapon(void) {};

std::string	const &Weapon::getType(void)
{
	const std::string& refType = this->_type;
	return (refType);
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}
#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
}
Character::Character(std::string name) : _name(name)
{
	std::cout << "Character string constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	//set the name
}
Character::~Character(void)
{
	std::cout << "Character destructor caled" << std::endl;
}
Character& Character::operator=(Character const &rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	//copy
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx] = NULL;
	//use amateria fct;	
}
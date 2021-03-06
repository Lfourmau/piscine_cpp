#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
}
Character::Character(std::string name) : _name(name), _slot(0)
{
	std::cout << "Character string constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character(Character const &src)
{
	this->operator=(src);
}

Character::~Character(void)
{
	std::cout << "Character destructor caled" << std::endl;
}
Character& Character::operator=(Character const &rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_slot = rhs._slot;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
	return (*this);
}

void Character::inc_slot(void)
{
	if (this->_slot == 3)
		this->_slot = 0;
	else
		this->_slot++;
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
	AMateria* toUse;
	if (this->inventory[idx] != NULL)
	{
		toUse = this->inventory[idx];
		toUse->use(target);
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "No materias in this slot" << std::endl;
	
}

void Character::equip(AMateria *m)
{
	this->inventory[this->_slot] = m;
	inc_slot();
}
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name) : _name(name), weapon(NULL){};
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon weaponToset);

	private:
		std::string _name;
		Weapon weapon;
};

#endif
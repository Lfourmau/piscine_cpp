#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon weaponPass) : _name(name), weapon(weaponPass){};
		~HumanA(void);
		void	attack(void);

	private:
		std::string _name;
		Weapon weapon;
};

#endif
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weaponPass);
		~HumanA(void);
		void	attack(void) const;

	private:
		std::string _name;
		Weapon& weapon;
};

#endif
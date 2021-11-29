#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _hitpoint;
		int _energy_points;
		int _attack_damage;
};

#endif
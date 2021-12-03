#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& src);
		ClapTrap(std::string name, int hitpoint, int energy_points, int attack_damage);
		~ClapTrap(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap& operator=(ClapTrap const& rhs);

	private:
		std::string _name;
		int _hitpoint;
		int _energy_points;
		int _attack_damage;
		ClapTrap(void);
};

#endif
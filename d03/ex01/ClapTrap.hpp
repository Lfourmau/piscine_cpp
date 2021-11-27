#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& src);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& rhs);
		void attack(std::string const & target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int _hitpoint;
		int _energy_points;
		int _attack_damage;
};

#endif
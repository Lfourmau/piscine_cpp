#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& src);
		~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap const& rhs);
		using ScavTrap::attack;
	
	private:
		std::string _name;
};

#endif
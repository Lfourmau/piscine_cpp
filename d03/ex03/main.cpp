#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("diamondito");
	
	diamond.highFivesGuys();
	diamond.attack("unknown");
	diamond.attack("unknown");
}

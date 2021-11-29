#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("fragito");
	
	frag.highFivesGuys();
	//the subject does not mention a proper attack function for FragTrap
	frag.attack("unknown");
	frag.takeDamage(40);
	frag.beRepaired(60);

}

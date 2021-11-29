#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Scav1("Scav1");
	ScavTrap Scav2("Scav2");
	
	Scav1.attack("Scav2");
	Scav2.takeDamage(20);
	Scav2.beRepaired(120);
	Scav1.guardGate();
	Scav2.guardGate();
}

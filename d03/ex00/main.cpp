#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap test("bobby");

	test.attack("josh");
	test.takeDamage(7);
	test.beRepaired(2);
	test.beRepaired(2);
	test.takeDamage(4);
	test.attack("bob");
}
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	//check on N
	Zombie *horde = new Zombie[N];
	std::string fullname = name + " number ";
	int i = 0;

	while (i < N)
	{
		name = fullname + std::to_string(i);
		horde[i].set_name(name);
		horde[i].announce();
		i++;
	}
	return (horde);
}
#include <iostream>
#include "Zombie.hpp"

int main(int argc, char **av)
{
	if (argc == 1)
	{
		std::cout << "Please enter a number" << std::endl;
		return (1);
	}
	Zombie *horde = zombieHorde(std::stoi(av[1]), "Zinedine Zidane");
	delete[] horde;
}
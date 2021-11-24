#include <iostream>
#include "Zombie.hpp"

int	full_digit(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **av)
{
	(void)argc;
	std::string number_zomb = "Zombie number ";
	std::string fullname;
	int i = 0;
	Zombie *zombie;

	if (argc == 1 || !full_digit(av[1]))
	{
		std::cout << "Please enter a number of Zombies (> to 0)" << std::endl;
		return (1);
	}
	while (i < std::stoi(av[1]))
	{
		fullname = number_zomb + std::to_string(i);
		zombie = newZombie(fullname);
		zombie->announce();
		delete(zombie);
		fullname += " randomchump";
		randomChump(fullname);
		i++;
	}
}
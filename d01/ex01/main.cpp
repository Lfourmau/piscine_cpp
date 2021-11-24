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
	if (argc == 1 || !full_digit(av[1]))
	{
		std::cout << "Please enter a number (> to 0)" << std::endl;
		return (1);
	}
	Zombie *horde = zombieHorde(std::stoi(av[1]), "Zinedine Zidane");
	delete[] horde;
}
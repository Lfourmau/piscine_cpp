#include "Karen.hpp"

int main(int argc, char **av)
{
	Karen karen;
	if (argc != 2)
	{
		std::cout << "You have to send [./Prog name] [Level]" << std::endl;
		return (1);
	}
	karen.complain(av[1]);
}
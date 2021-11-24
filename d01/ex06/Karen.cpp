#include "Karen.hpp"

Karen::Karen(void) {};
Karen::~Karen(void) {};

void	Karen::debug(void)
{
	std::cout << "Karen is talking about debug" << std::endl;
}
void	Karen::info(void)
{
	std::cout << "Karen is talking about infos" << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "Karen is talking about warning" << std::endl;
}
void	Karen::error(void)
{
	std::cout << "Karen is taking about an error" << std::endl;
}

void	Karen::complain(std::string level)
{
	int i = 0;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && level.compare(levels[i]))
		i++;
	switch (i)
	{
	case 0 : std::cout << "[" << levels[i] << "]" << std::endl;
			 debug();
			i++;
	case 1 : std::cout << "[" << levels[i] << "]" << std::endl;
			 info();
			i++;
	case 2 : std::cout << "[" << levels[i] << "]" << std::endl;
			warning();
			i++;
	case 3 : std::cout << "[" << levels[i] << "]" << std::endl;
			error();
			break;
	default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
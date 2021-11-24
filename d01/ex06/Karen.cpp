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

std::string Karen::upperString(std::string str)
{
	int i = -1;

	while (str[++i])
		str[i] = std::toupper(str[i]);
	return (str);
}

void	Karen::complain(std::string level)
{
	int i = 0;

	std::string upperLevel = upperString(level);
	std::string levels[] = {"debug", "info", "warning", "error"};
	void (Karen::*functionsPtr[])(void)= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};


	while (i < 4 && (upperString(levels[i]).compare(upperLevel) && upperString(levels[i]).compare(upperLevel)))
		i++;
	if (i == 4)	
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	while (i < 4)
	{
		std::cout << "[" << upperString(levels[i]) << "]" << std::endl;
		(this->*functionsPtr[i])();
		std::cout << std::endl;
		i++;
	}
}
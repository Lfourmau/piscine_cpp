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

	std::string levels[] = {"debug", "info", "warning", "error"};
	void (Karen::*functionsPtr[])(void)= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i == 4)	
		return ;
	(this->*functionsPtr[i])();
}
#include "Karen.hpp"

Karen::Karen(void) {};
Karen::~Karen(void) {};

void	Karen::debug(void)
{
	std::cout << "Karin is debugging" << std::endl;
}
void	Karen::info(void)
{
	std::cout << "Karin is on infos" << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "Karin is warning" << std::endl;
}
void	Karen::error(void)
{
	std::cout << "Karin is an error" << std::endl;
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
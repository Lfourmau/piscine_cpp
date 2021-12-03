#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Top(4);
	Bureaucrat Bottom(148);

	std::cout << "---HIGH TEST---" << std::endl;
	Top.promotion();
	Top.promotion();
	Top.promotion();
	std::cout << Top << std::endl;
	Top.promotion();
	std::cout << "---LOW TEST---" << std::endl;
	Bottom.downgrade();
	Bottom.downgrade();
	std::cout << Bottom << std::endl;
	Bottom.downgrade();
	return (1);
}
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat bob(15);
	Form formBob(13);

	std::cout << formBob << std::endl;
	bob.signForm(formBob);
	std::cout << formBob << std::endl;
	bob.promotion();
	bob.promotion();
	bob.signForm(formBob);
	std::cout << formBob << std::endl;
	bob.downgrade();
	bob.downgrade();
	bob.downgrade();
	bob.downgrade();
	bob.signForm(formBob);
	std::cout << formBob << std::endl;
	return (1);
}
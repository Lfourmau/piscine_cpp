#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "Form.hpp"

int main(void)
{
	Bureaucrat bob(2);
	RobotomyRequestForm tst("target");

	bob.signForm(tst);
	bob.executeForm(tst);

	return (1);
}
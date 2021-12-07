#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "Form.hpp"

int main(void)
{
	Bureaucrat bob(3);
	RobotomyRequestForm robot("target");
	ShrubberyCreationForm shrub("target");
	PresidentialPardonForm presidential("target");

	bob.signForm(presidential);
	bob.signForm(shrub);
	bob.signForm(robot);
	bob.executeForm(shrub);
	bob.executeForm(robot);
	bob.executeForm(robot);
	bob.executeForm(robot);
	bob.executeForm(robot);
	bob.executeForm(robot);
	bob.executeForm(presidential);
	bob.promotion();

	return (1);
}
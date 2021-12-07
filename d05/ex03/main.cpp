#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "Form.hpp"

int main(void)
{

	Intern Intern1;
	Intern Intern2;
	Intern Intern3;
	Bureaucrat bob(8);
	Form* a;
	Form* b;
	Form* c;
	a = Intern1.makeForm("robotomy request", "Bender");
	b = Intern2.makeForm("presidential pardon", "Bender");
	c = Intern3.makeForm("shrubbery creation", "Bender");
	bob.signForm(*a);
	bob.signForm(*b);
	bob.signForm(*c);
	bob.executeForm(*a);
	bob.executeForm(*a);
	bob.executeForm(*b);
	bob.executeForm(*c);
	delete(Intern1._ret);
	delete(Intern2._ret);
	delete(Intern3._ret);


	return (1);
}
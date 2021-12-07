#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", target, 72, 45)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form("Robotomy", "defaultTarget", 72, 45)
{
	operator=(src);
}
RobotomyRequestForm::~RobotomyRequestForm(void) {};

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const&rhs)
{
	(void)rhs;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int random_value = rand() % 3;

	if (this->getExecGrade() < executor.getGrade())
		throw(GradeTooLowException());
	else if (this->getSigned() == 0)
		throw(NoSignedException());
	if (random_value % 2 == 0)
	{
		std::cout << "BOOOOOOOUUUUUH BAAAAAAH B EEEHEEEEEEEEEEEEH" << std::endl;
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "It's a fail, " << this->getTarget() << " isn't robotomized" << std::endl;
	}
}

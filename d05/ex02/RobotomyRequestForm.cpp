#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", target, 72, 45)
{
}
RobotomyRequestForm::~RobotomyRequestForm(void) {};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw(GradeTooLowException());
	std::cout << "BOOOOOOOUUUUUH BAAAAAAH B EEEHEEEEEEEEEEEEH" << std::endl;
	std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
}

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", target, 145, 137)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw(GradeTooLowException());
	std::ofstream outfile (this->getTarget() + "_shrubbery");
	outfile <<  "TREEEES" << std::endl;
	outfile.close();
}
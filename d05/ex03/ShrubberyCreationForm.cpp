#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", target, 145, 137)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form("Robotomy", "defaultTarget", 72, 45)
{
	operator=(src);
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const&rhs)
{
	(void)rhs;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw(GradeTooLowException());
	else if (this->getSigned() == 0)
		throw(NoSignedException());
	std::ofstream outfile (this->getTarget() + "_shrubbery");
		outfile << "           _\\/_        \n";
		outfile << "            /\\	     \n";
		outfile << "            /\\		 \n";
		outfile << "           /  \\		 \n";
		outfile << "           /~~\\o	     \n";
		outfile << "          /o   \\	     \n";
		outfile << "         /~~*~~~\\	     \n";
		outfile << "        o/  o   \\	     \n";
		outfile << "        /~~~~~~~~\\~`   \n";
		outfile << "       /__*_______\\    \n";
		outfile << "            ||		     \n";
		outfile << "          \\====/		 \n";
		outfile << "           \\__/		 \n";
	outfile.close();
}
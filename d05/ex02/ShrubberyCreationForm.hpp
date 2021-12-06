#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class Form;
class ShrubberyCreationForm : public Form {
	public :
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		virtual void execute(Bureaucrat const & executor) const;

	private :
};

#endif
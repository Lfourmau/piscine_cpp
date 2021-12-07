#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const& src);
		~Intern(void);
		Intern& operator=(Intern const& rhs);
		Form	*makeForm(std::string formName, std::string formTarget);
		class BadFormException : public std::exception {
				virtual const char *what(void) const throw() {
					{
						return ("Unrecognized form");
					}
				}
		};
		Form *_ret;

	private:
		std::string createName(std::string str);
		void shrub(std::string formTarget);
		void robot(std::string formTarget);
		void presidential(std::string formTarget);
		void Form_creation(std::string formName, std::string formTarget);
};

#endif
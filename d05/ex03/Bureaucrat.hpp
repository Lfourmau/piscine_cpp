#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(int grade);
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat& operator=(Bureaucrat const& rhs);
		~Bureaucrat(void);
		std::string getName(void) const;
		int 		getGrade(void) const;
		void		downgrade(void);
		void		promotion(void);
		void		signForm(Form& tosign);
		void		executeForm(Form const & form);
		class GradeTooHighException : public std::exception {
				virtual const char *what(void) const throw() {
					{
						return ("The bureaucrat cannot be promute again");
					}
				}
		};
		class GradeTooLowException : public std::exception {
				virtual const char *what(void) const throw() {
					{
						return ("The bureaucrat cannot be downgrade again");
					}
				}
		};
	private:
		std::string const _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs);

#endif
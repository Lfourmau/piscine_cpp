#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
	public:
		Form(int grade);
		Form(Form const& src);
		~Form(void);
		Form& operator=(Form const& rhs);
		std::string getName(void) const;
		bool getSigned(void) const;
		int	 getRequireGrade(void) const;
		virtual void BeSigned(Bureaucrat bureaucrat) = 0;
		void execute(Bureaucrat const & executor) const;
		class GradeTooHighException : public std::exception {
				virtual const char *what(void) const throw() {
					{
						return ("the grade is too high");
					}
				}
		};
		class GradeTooLowException : public std::exception {
				virtual const char *what(void) const throw() {
					{
						return ("the grade is too low");
					}
				}
		};

	private:
		Form(void);
		const 		std::string _name;
		std::string 			target;
		bool 					_is_signed;
		const int				_require_grade;
};

std::ostream& operator<<(std::ostream& out, Form const& rhs);

#endif
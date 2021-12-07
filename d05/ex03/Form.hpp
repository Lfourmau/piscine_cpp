#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
	public:
		Form(std::string name, std::string target, int signGrade, int execGrade);
		Form(Form const& src);
		virtual ~Form(void);
		Form& operator=(Form const& rhs);
		std::string getName(void) const;
		bool getSigned(void) const;
		int	 getSignGrade(void) const;
		int	 getExecGrade(void) const;
		std::string	 getTarget(void) const;
		void BeSigned(Bureaucrat bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class NoSignedException : public std::exception {
				virtual const char *what(void) const throw() {
					{
						return ("The form is not signed");
					}
				}
		};

	private:
		Form(void);
		const 		std::string _name;
		std::string 			_target;
		bool 					_is_signed;
		const int				_sign_grade;
		const int				_exec_grade;
};

std::ostream& operator<<(std::ostream& out, Form const& rhs);

#endif
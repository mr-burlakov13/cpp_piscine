#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"


class Bureaucrat;
class Form;

class Bureaucrat
{
	private:
		std::string			m_name;
		int           		m_grade;

	public:
		Bureaucrat(const std::string & name, int grade);
		Bureaucrat(const Bureaucrat&);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat& op);

		const std::string & getName() const;
		int                 getGrade() const;

		void				upGrade();
		void				downGrade();
		void				signForm(Form & form);
		void				executeForm(Form const & form);
		
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException () throw();
				GradeTooHighException (const GradeTooHighException&) throw();
				GradeTooHighException& operator= (const GradeTooHighException&) throw();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException () throw();
				GradeTooLowException (const GradeTooLowException&) throw();
				GradeTooLowException& operator= (const GradeTooLowException&) throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
};


std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);


#endif
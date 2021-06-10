#ifndef FORM_HPP
# define FORM_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
    private:
        std::string     m_name;
        bool            m_signed;
        int             m_requiered_sign_grade;
        int             m_requiered_exec_grade;
        std::string     m_target;
        virtual void        beExecuted() const;

    public:
        Form(std::string const & name, int requiered_sign_grade, int requiered_exec_grade, std::string const & target);
        Form(const Form&);
        virtual ~Form();
        Form &operator=(const Form& op);

        const std::string & getName() const;
        bool                getSigned() const;
        int                 getSignGrade() const;
        int                 getExecuteGrade() const;
        const std::string & getTarget() const;

        void                beSigned(const Bureaucrat & bureaucrat);
        void                execute(Bureaucrat const & executor) const;

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


std::ostream    &operator<<(std::ostream & out, const Form & form);


#endif
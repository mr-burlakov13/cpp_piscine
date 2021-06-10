#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <sstream>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Bureaucrat
{
private:
    Bureaucrat();

    std::string const m_name;
    int               m_grade;
public:
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &copy);
    virtual ~Bureaucrat();

    class GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw();
    };

    Bureaucrat &operator = (const Bureaucrat& op); 

    std::string const &getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
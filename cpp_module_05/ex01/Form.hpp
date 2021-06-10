#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
    Form();

    std::string const &m_name;
    bool m_signed;
    int const m_singGrade;
    int const m_executeGreade;
public:
    Form(std::string const &name, int const singGrade, int const executeGrade);
    Form(Form const &copy);
    virtual ~Form();

    class GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw();
    };
    class FormAlreadySignedExcrption: public std::exception
    {
        virtual const char* what() const throw();
    };

    Form &operator=(Form const op);

    std::string const &getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    void beSigned(Bureaucrat const &bureaucrat);
    
};

std::ostream &operator<<(std::ostream &out, Form const &form);




#endif
#include "Form.hpp"

Form::Form(std::string const &name, int const singGrade, int const executeGrade):
    m_name(name), m_signed(false), m_singGrade(singGrade), m_executeGreade(executeGrade)
{
    if (m_singGrade < 1 || m_executeGreade < 1)
		throw Form::GradeTooHighException();
	else if (m_singGrade > 150 || m_executeGreade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy):m_name(copy.m_name), m_signed(copy.m_signed), m_singGrade(copy.m_singGrade), m_executeGreade(copy.m_executeGreade)
{
    if (m_singGrade < 1 || m_executeGreade < 1)
		throw Form::GradeTooHighException();
	else if (m_singGrade > 150 || m_executeGreade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

const char* Form::GradeTooHighException::what() const throw()
{
   return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char* Form::FormAlreadySignedExcrption::what() const throw()
{
	return "FormException: The Form is already signed";
}


Form &Form::operator=(Form const op)
{
    if (this != &op)
	{
        m_signed = op.m_signed;
	}
	return (*this);
}

std::string const &Form::getName() const
{
    return m_name;
}

bool Form::isSigned() const{
    return m_signed;
}

int Form::getSignGrade() const
{
    return m_singGrade;
}


int Form::getExecuteGrade() const
{
    return m_executeGreade;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > m_singGrade)
        throw Form::GradeTooLowException();
    else if (m_signed)
        throw Form::FormAlreadySignedExcrption();
    m_signed = true;
}

std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << " is ";

	if (form.isSigned() == false)
		out << "not signed, ";
	else
		out << COLOR_GREEN"signed, "COLOR_RESET;
	
	out << "it is signable at grade : " << form.getSignGrade();
	out << " and executable at grade : " << form.getExecuteGrade() << "." << std::endl;

	return (out);
}





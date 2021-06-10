#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string & name, int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	m_name = name;
	m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) 
{
	if (copy.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	m_name = copy.getName();
	m_grade = copy.getGrade();
}


Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	m_name = op.getName();
	m_grade = op.getGrade();
	return (*this);
}

const std::string & Bureaucrat::getName(void) const 
{ 
    return (m_name); 
}

int					Bureaucrat::getGrade(void) const
{ 
    return (m_grade); 
}


void				Bureaucrat::upGrade(void)
{
	if (m_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade -= 1;
}


void				Bureaucrat::downGrade(void)
{
	if (m_grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade += 1;
}


void				Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
		std::cout << m_name << " cant sign " << form.getName() << " because he see that is already signed." << std::endl;
	else
		try
		{
			form.beSigned(*this);
			std::cout << m_name << COLOR_GREEN" signs "COLOR_RESET << form.getName() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << m_name << " cant sign " << form.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
}

void				Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << m_name << COLOR_GREEN" executs "COLOR_RESET << form.getName() << std::endl;
	}
	catch (std::string & e)
	{
		std::cout << m_name << " cants execute " << form.getName();
		std::cout << " because " << e << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade is to high for Bureaucrat."); }


Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}


Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade is to low for Bureaucrat."); }

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}
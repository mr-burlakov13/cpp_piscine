#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): m_name(name), m_grade(grade)
{
    if (m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): m_name(copy.m_name), m_grade(copy.m_grade)
{
    if (m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return COLOR_RED"BureaucratException: Grade too High ⬆️"COLOR_RESET;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return COLOR_RED"BureaucratException: Grade too Low ⬇️"COLOR_RESET;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &op)
{
   if (this != &op)
	{
        m_grade = op.m_grade;
	}
	return (*this);
}

std::string const &Bureaucrat::getName() const
{
	return (m_name);
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::incrementGrade()
{
    if (m_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    m_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (m_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    m_grade += 1;
}

void Bureaucrat::signForm(Form &form) const
{
    if (form.isSigned())
    {
        std::cout << *this << COLOR_RED" cannot sign "COLOR_RESET << form << "because the form is already signed." << std::endl;
    }
    else if (form.getSignGrade() < m_grade)
    {
        std::cout << *this << COLOR_RED"cannot sign "COLOR_RESET << form << "because it's grade is too low." << std::endl;
    }
    else
    {
        std::cout << *this << " signs " << form << std::endl;
    }
    form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << COLOR_YELLOW"Bureaucrat "COLOR_RESET <<COLOR_BLUE << bureaucrat.getName() << COLOR_RESET" (Grade " <<COLOR_GREEN << bureaucrat.getGrade() << COLOR_RESET << ")";
    return out;
}
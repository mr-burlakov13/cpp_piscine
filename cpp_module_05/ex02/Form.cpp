#include "Form.hpp"


Form::Form(const std::string & name, int requiered_sign_grade, int requiered_exec_grade, std::string const & target)
{
	if (requiered_sign_grade <= 0 || requiered_exec_grade <= 0)
		throw Form::GradeTooHighException();
	else if (requiered_sign_grade > 150 || requiered_exec_grade > 150)
		throw Form::GradeTooLowException();
	m_name = name;
	m_signed = false;
	m_requiered_sign_grade = requiered_sign_grade;
	m_requiered_exec_grade = requiered_exec_grade;
	m_target = target;
}

Form::Form(const Form& copy)
{
	if (copy.getSignGrade() <= 0 || copy.getExecuteGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (copy.getSignGrade() > 150 || copy.getExecuteGrade() > 150)
		throw Form::GradeTooLowException();
	m_name = copy.getName();
	m_signed = copy.getSigned();
	m_requiered_sign_grade = copy.getSignGrade();
	m_requiered_exec_grade = copy.getExecuteGrade();
	m_target = copy.getTarget();
}


Form::~Form() {}

Form & Form::operator=(const Form& op)
{
	if (this == &op)
		return (*this);
	if (op.getSignGrade() <= 0 || op.getExecuteGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (op.getSignGrade() > 150 || op.getExecuteGrade() > 150)
		throw Form::GradeTooLowException();
	m_name = op.getName();
	m_signed = op.getSigned();
	m_requiered_sign_grade = op.getSignGrade();
	m_requiered_exec_grade = op.getExecuteGrade();
	m_target = op.getTarget();
	return (*this);
}


const std::string &	Form::getName(void) const { return (m_name); }

bool				Form::getSigned(void) const { return (m_signed); }


int					Form::getSignGrade(void) const { return (m_requiered_sign_grade); }

int					Form::getExecuteGrade(void) const { return (m_requiered_exec_grade); }


const std::string &	Form::getTarget(void) const { return (m_target); }



void				Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= m_requiered_sign_grade)
		m_signed = true;
	else
		throw Form::GradeTooLowException();
}


void				Form::beExecuted() const {}


void				Form::execute(Bureaucrat const & executor) const
{
	if (!m_signed)
		throw std::string("the form is not signed.");
	else if (executor.getGrade() > m_requiered_exec_grade)
		throw std::string("grade is to low.");
	beExecuted();
}


Form::GradeTooHighException::GradeTooHighException() throw() {}


Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}


Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(const GradeTooHighException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() { return ("Grade is to high for Form."); }



Form::GradeTooLowException::GradeTooLowException() throw() {}


Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}


Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(const GradeTooLowException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() { return ("Grade is to low for Form."); }


std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << " is ";

	if (form.getSigned() == false)
		out << "not signed, ";
	else
		out << "signed, ";
	
	out << "it is signable at grade : " << form.getSignGrade();
	out << " and executable at grade : " << form.getExecuteGrade() << "." << std::endl;

	return (out);
}

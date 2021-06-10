
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
:
Form("PresidentialPardonForm", 25, 5, target)	
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
:
Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade(), copy.getTarget())
{

}


PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}

void					PresidentialPardonForm::beExecuted() const
{
	std::cout << getTarget() << " was pardonned by Zafod Beeblebrox.🙈" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << m_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

Form *PresidentialPardonForm::generate(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}
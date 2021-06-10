#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
:
Form("RobotomyRequestForm", 72, 45, target)	
{ 
	srand(time(NULL)); 
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
:
Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade(), copy.getTarget())
{
	srand(time(NULL)); 
}


RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}


void	RobotomyRequestForm::beExecuted() const
{
	std::cout << COLOR_YELLOW"🔫📣RATATATRTATRTTATTATATRTATATRTATRATRSTATATATATATATATATAZZZZZZZZZZZZUYYUZZUUZUZZZZUZZZXCCCCYYKZZ🔫📣"COLOR_RESET << std::endl;
	if((1 + (rand() % 3)) == 2)
		std::cout << getTarget() << " was robotomized!🤖" << std::endl;
	else
		std::cout << "The robotization messed up..." << std::endl;
}
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

static void testForm(Bureaucrat* edik, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << std::endl;
    edik->signForm(*form);
    edik->executeForm(*form);
}

int main()
{
    ShrubberyCreationForm* shrub = new ShrubberyCreationForm("Elka");
    RobotomyRequestForm* robot = new RobotomyRequestForm("Zloy");
    PresidentialPardonForm* pardon = new PresidentialPardonForm("Usach");

    Bureaucrat* Ilnur = new Bureaucrat("Ilnur", 120);
    Bureaucrat* Lev = new Bureaucrat("Lev", 33);
    Bureaucrat* Davlet = new Bureaucrat("Davlet", 1);

    std::cout << COLOR_RED"tests :"COLOR_RESET << std::endl;

    testForm(Ilnur, shrub);
    testForm(Lev, robot);
    testForm(Davlet, pardon);

    std::cout << std::endl << COLOR_RED"tests2 :"COLOR_RESET << std::endl;

    testForm(Ilnur, pardon);

    delete shrub;
    delete robot;
    delete pardon;

    delete Ilnur;
    delete Lev;
    delete Davlet;

    return (0);
}
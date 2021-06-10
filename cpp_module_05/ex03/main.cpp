# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

static void testForm(Bureaucrat& edik, Form* form)
{
    std::cout << std::endl << "Sign & Execute " << form->getName() << ": " << std::endl;
    edik.signForm(*form);
    edik.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat sign("Marli", 1);
    Form *Igor = NULL;

    std::cout << std::endl;
    Igor = intern.makeForm(form_name, target_name);

    if (Igor)
    {
        testForm(sign, Igor);
        delete Igor;
    }
}

int main()
{
    Intern Fill;

    std::cout << std::endl << "Normal tests : " << std::endl;
    testIntern(Fill, "stomotolog", "Michelon");
    testIntern(Fill, "robotomy request", "Lev");
    testIntern(Fill, "elochka", "TIGr");

    std::cout << std::endl << "Doesn't exist tests : " << std::endl;
    testIntern(Fill, "doesn't exist", "NOP");

    return (0);
}
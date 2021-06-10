#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Edik("Edik", 100);
	std::cout << Edik << std::endl;

	Form form1("form1", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(Edik);
	std::cout << form1 << std::endl;

	std::cout << COLOR_CYAN"-------------------------"COLOR_RESET << std::endl;

	Form form2("form2", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		Edik.signForm(form2);
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	std::cout << COLOR_CYAN"-------------------------"COLOR_RESET << std::endl;

	Form form3("form3", 101, 50);
	std::cout << form3 << std::endl;
	Edik.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		Edik.signForm(form3);
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << form3 << std::endl;

	std::cout << COLOR_CYAN"-------------------------"COLOR_RESET << std::endl;

	try
	{
		Form formException("trial Form", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}

	std::cout << COLOR_CYAN"-------------------------"COLOR_RESET << std::endl;

	try
	{
		Form formException("trial Form", 0, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	
	return (0);
}
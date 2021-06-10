#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;

	francis.incrementGrade();
	std::cout << francis << std::endl;

	francis.decrementGrade();
	std::cout << francis << std::endl;

	try
	{
		Bureaucrat Edik("Edik", 0);
		std::cout << Edik << std::endl;
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}

	try
	{
		Bureaucrat Edik("Edik", 200);
		std::cout << Edik << std::endl;
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}

	try
	{
		Bureaucrat Edik("Edik", 1);
		std::cout << Edik << std::endl;
		Edik.incrementGrade();
		std::cout << Edik << std::endl;
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}

	try
	{
		Bureaucrat Edik("Edik", 150);
		std::cout << Edik << std::endl;
		Edik.decrementGrade();
		std::cout << Edik << std::endl;
	}
	catch(std::exception const &exc)
	{
		std::cerr << exc.what() << std::endl;
	}

	return (0);
}
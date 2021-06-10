#include "Pony.hpp"

void	Pony::say_hello()
{
	std::cout << "Hi im pony " + m_name << std::endl;
}

void	Pony::set_name(std::string str)
{
	m_name = str;
}

std::string Pony::get_name()
{
	return (m_name);
}

void	Pony::say_bye()
{
	std::cout << "Bye" << std::endl;
}
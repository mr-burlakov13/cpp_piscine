#include "Zombie.hpp"

void	Zombie::init_zombi(std::string name, std::string type)
{
	m_name = name;
	m_type = type;
}

void	Zombie::announce()
{
	std::cout <<COLOR_GREEN "<" << m_name << "(" << m_type << "🔫)"  << "> " << COLOR_CYAN"Braiiiiiiinnnssss...(skinul 500 R v obshyak )💰" << std::endl;
}
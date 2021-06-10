
#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << COLOR_GREEN << m_name << COLOR_RESET "(" << m_type << ")"  << "> " << "Braiiiiiiinnnssss..." << std::endl;
}
Zombie::Zombie(std::string name, std::string type){m_name = name, m_type = type;}
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde orda(10);
	std::cout << COLOR_YELLOW"🎺 Bratva, Sobiraemsya!!! 🎺" << std::endl;
	orda.announce_all();
}
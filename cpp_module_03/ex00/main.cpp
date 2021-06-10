#include "FragTrap.hpp"

int main()
{
	FragTrap player("Tolik");
	std::string target = "Edik";
	player.rangedAttack(target);
	player.meleeAttack(target);
	player.vaulthunter_dot_exe(target);

	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);


	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);

}
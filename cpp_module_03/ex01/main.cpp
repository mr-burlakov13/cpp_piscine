#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap player("Tolik");
	ScavTrap player2("Andrey");
	std::string target = "Edik";

	player.rangedAttack(target);
	player.meleeAttack(target);
	player.vaulthunter_dot_exe(target);

	player2.rangedAttack(target);
	player2.meleeAttack(target);
	player2.challengeNewcomer(target);

	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);


	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
}
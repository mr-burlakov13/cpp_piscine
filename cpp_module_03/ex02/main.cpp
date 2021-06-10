#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void game_1(std::string target)
{
	FragTrap player("Tolik");

	player.rangedAttack(target);
	player.meleeAttack(target);
	player.vaulthunter_dot_exe(target);
	player.meleeAttack(target);

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
}

void game_2(std::string target)
{
	ScavTrap player2("Dron");
	
	player2.rangedAttack(target);
	player2.challengeNewcomer(target);

	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);
	player2.takeDamage(20);

	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
	player2.beRepaired(15);
}


int main()
{
	std::string target = "Edik";

	game_1(target);
	game_2(target);

}
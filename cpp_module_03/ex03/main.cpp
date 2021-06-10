#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

void game_1(FragTrap player, std::string target)
{

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

void game_2(ScavTrap player2, std::string target)
{
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

	FragTrap player("Tolik");
	game_1(player, target);

	ScavTrap player2("Dron");
	game_2(player2, target);

	ClapTrap player4("MAIN_PLAYER");
	NinjaTrap player3("Saske");
	
	player3.rangedAttack(target);
	player3.rangedAttack(target);
	player3.ninjaShoebox(player);
	player3.ninjaShoebox(player2);
	player3.ninjaShoebox(player3);
	player3.ninjaShoebox(player4);

	player3.takeDamage(20);
	player3.takeDamage(20);
	player3.takeDamage(20);
	
	player3.beRepaired(15);
	player3.beRepaired(15);

}
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << COLOR_CYAN"----------------------------------" << std::endl;

	bob = new TacticalMarine;
	jim = new AssaultTerminator;
	vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	std::cout << COLOR_MAGENTA"assignment operator here:" << std::endl;
	ISquad* vlc2 = new Squad;
	*((Squad *)vlc2) = *((Squad *)vlc);
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << COLOR_CYAN"-----------------------------------" << std::endl;

	std::cout << COLOR_MAGENTA"copy constructor here:" << std::endl;
	ISquad* vlc3 = new Squad(*((Squad *)vlc2));
	for (int i = 0; i < vlc3->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc3->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << COLOR_CYAN"------------------------------------" << std::endl;

	delete vlc;
	delete vlc2;
	delete vlc3;
	return 0;
}

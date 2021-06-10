#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Jabahut.hpp"
#include <iostream>

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();


	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << COLOR_GREEN"----------------------------------"COLOR_RESET << std::endl;

	Enemy* c = new SuperMutant();

	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	me->equip(pf);
	me->attack(c);
	me->attack(c);
	me->equip(pr);
	std::cout << *me;

	std::cout << "enemy hp is " << c->get_Hp() << std::endl;

	me->attack(c);

	std::cout << COLOR_GREEN"----------------------------------"COLOR_RESET << std::endl;

	Enemy* e = new Jabahut();
	me->recoverAP();
	me->recoverAP();

	me->attack(e);
	me->equip(pf);
	me->attack(e);
	me->attack(e);
	me->recoverAP();
	me->attack(e);

	std::cout << COLOR_GREEN"----------------------------------"COLOR_RESET << std::endl;

	delete pr;
	delete pf;
	delete me;

	return 0;
}

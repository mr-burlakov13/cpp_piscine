#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie zomb("Zombie_Edik", "Pedik 🤣");
	Zombie *zomb2;
	ZombieEvent event;
	zomb.announce();
	event.setZombieType("Brodyaga 🎃");
	zomb2 = event.randomChump();
	zomb2->announce();
	delete (zomb2);
	return (0);
}
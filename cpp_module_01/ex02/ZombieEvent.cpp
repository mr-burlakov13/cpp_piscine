#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}


Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *newzomb;
	newzomb =  new Zombie(name, this->m_type);
	return (newzomb);
}

int	random_nb()
{
	srand((unsigned) time(0));
	return (rand()%10);
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *newname;
	std::string name[10] = { "Edik", "Sanya", "Danya", "Davlet", "Petr", "Andrey", 
		"Lich", "Jeka", "Ilnur", "Khabib"};
	newname =  new Zombie(name[random_nb()], this->m_type);
	return (newname);
}
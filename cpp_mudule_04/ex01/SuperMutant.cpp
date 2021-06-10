
#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "🤖Gaaah. Me want smash heads!🤖" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy) {

}

SuperMutant &SuperMutant::operator=(SuperMutant const &op) {
	if (this == &op)
		return (*this);

	Enemy::operator=(op);
	return (*this);
}

SuperMutant::~SuperMutant() {
	std::cout << "* 💀Aaargh...💀 *" << std::endl;
}

void SuperMutant::take_Damage(int damage) {
	Enemy::take_Damage(damage - 3);
}

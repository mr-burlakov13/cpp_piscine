#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine() {
	std::cout << COLOR_GREEN"Tactical Marine ready for battle!"COLOR_RESET << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy) {
	*this = copy;
	std::cout << COLOR_GREEN"Tactical Marine ready for battle!"COLOR_RESET << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &op) {
	if (this == &op)
		return (*this);
	return (*this);
}

TacticalMarine::~TacticalMarine() {
	std::cout << COLOR_RED"💀Aaargh...💀"COLOR_RESET << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const {
	TacticalMarine *copy = new TacticalMarine;

	*copy = *this;
	return (copy);
}

void TacticalMarine::battleCry() const {
	std::cout << COLOR_YELLOW"📣For the holy PLOT!📣"COLOR_RESET << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << COLOR_YELLOW"*🔫 attacks with a bolter 🔫*"COLOR_RESET << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << COLOR_YELLOW"*🗡 attacks with a chainsword 🗡*"COLOR_RESET << std::endl;
}

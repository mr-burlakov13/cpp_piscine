
#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator() {
	std::cout << COLOR_GREEN"*π teleports from space π*"COLOR_RESET << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) {
	*this = copy;
	std::cout << COLOR_GREEN"*π teleports from space π*"COLOR_RESET << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &op) {
	if (this == &op)
		return (*this);
	return (*this);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << COLOR_RED"πI'll be back...π"COLOR_RESET << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const {
	AssaultTerminator *copy = new AssaultTerminator;

	*copy = *this;
	return (copy);
}

void AssaultTerminator::battleCry() const {
	std::cout << COLOR_YELLOW"π£This code is unclean. PURIFY IT!β"COLOR_RESET << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << COLOR_YELLOW"*π€·ββ does nothing π€·ββ*"COLOR_RESET << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << COLOR_YELLOW"*πππ attacks with chainfists πππ*"COLOR_RESET << std::endl;
}

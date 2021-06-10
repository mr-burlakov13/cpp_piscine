
#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator() {
	std::cout << COLOR_GREEN"*🚀 teleports from space 🚀*"COLOR_RESET << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) {
	*this = copy;
	std::cout << COLOR_GREEN"*🚀 teleports from space 🚀*"COLOR_RESET << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &op) {
	if (this == &op)
		return (*this);
	return (*this);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << COLOR_RED"💀I'll be back...💀"COLOR_RESET << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const {
	AssaultTerminator *copy = new AssaultTerminator;

	*copy = *this;
	return (copy);
}

void AssaultTerminator::battleCry() const {
	std::cout << COLOR_YELLOW"📣This code is unclean. PURIFY IT!✅"COLOR_RESET << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << COLOR_YELLOW"*🤷‍♂ does nothing 🤷‍♂*"COLOR_RESET << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << COLOR_YELLOW"*👊👊👊 attacks with chainfists 👊👊👊*"COLOR_RESET << std::endl;
}

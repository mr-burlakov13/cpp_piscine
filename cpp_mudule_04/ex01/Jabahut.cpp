#include "Jabahut.hpp"
#include <iostream>

Jabahut::Jabahut() : Enemy(100, "Jabahut") {
	std::cout << "🐸I'm the fattest!🐸" << std::endl;
}

Jabahut::Jabahut(Jabahut const &copy) : Enemy(copy) {

}

Jabahut &Jabahut::operator=(Jabahut const &op) {
	if (this == &op)
		return (*this);

	Enemy::operator=(op);
	return (*this);
}

Jabahut::~Jabahut() {
	std::cout << "*💀 I'll be back 💀*" << std::endl;
}
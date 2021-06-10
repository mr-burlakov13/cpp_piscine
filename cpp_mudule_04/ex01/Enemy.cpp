#include "Enemy.hpp"

Enemy::Enemy() : m_hp(0), m_type("") {

}

Enemy::Enemy(int hp, std::string const &type) : m_hp(hp), m_type(type) {

}

Enemy::Enemy(Enemy const &copy) {
	*this = copy;
}

Enemy &Enemy::operator=(Enemy const &op) {
	if (this != &op)
	{
		m_hp = op.m_hp;
		m_type = op.m_type;
	}
	return (*this);
}

Enemy::~Enemy() {

}

std::string const &Enemy::get_Type() const {
	return (m_type);
}

int Enemy::get_Hp() const {
	return (m_hp);
}

void Enemy::take_Damage(int damage) {
	m_hp -= damage;
	if (m_hp < 0)
		m_hp = 0;
}

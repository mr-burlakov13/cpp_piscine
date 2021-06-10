#include "Character.hpp"
#include <iostream>

Character::Character() : m_name(""), m_ap(40), m_weapon(NULL) {

}

Character::Character(std::string const &name) : m_name(name), m_ap(40), m_weapon(NULL) {

}

Character::Character(Character const &copy) {
	*this = copy;
}

Character &Character::operator=(Character const &op) {
	if (this != &op)
	{
		m_name = op.m_name;
		m_ap = op.m_ap;
		m_weapon = op.m_weapon;
	}
	return (*this);
}

Character::~Character() {

}

void Character::recoverAP() {
	if (m_ap > 40 - 10)
		m_ap = 40;
	else
		m_ap += 10;
}

void Character::equip(AWeapon *weapon) {
	m_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (m_weapon)
	{
		if (m_ap > m_weapon->get_APCost() and enemy->get_Hp() > 0)
		{
			std::cout <<COLOR_YELLOW << m_name <<COLOR_RESET << " attacks " << enemy->get_Type() << " with a " << m_weapon->get_name() << std::endl;
			m_weapon->attack();
			m_ap -= m_weapon->get_APCost();
			enemy->take_Damage(m_weapon->get_Damage());
			if (enemy->get_Hp() == 0)
				delete enemy;
		}
	}
}

std::string const &Character::get_name() const {
	return (m_name);
}

int Character::get_Ap() const {
	return (m_ap);
}

AWeapon *Character::get_Weapon() const {
	return (m_weapon);
}

std::ostream &operator<<(std::ostream &stream, Character const &character) {
	if (character.get_Weapon())
		stream <<COLOR_YELLOW << character.get_name()<<COLOR_RESET << " has " COLOR_BLUE << character.get_Ap() << " AP "<<COLOR_RESET"and wields a " COLOR_RED<< character.get_Weapon()->get_name() <<COLOR_RESET << std::endl;
	else
		stream <<COLOR_YELLOW << character.get_name()<<COLOR_RESET << " has " COLOR_BLUE << character.get_Ap() << " AP "<<COLOR_RESET"and is unarmed" << std::endl;
	return (stream);
}
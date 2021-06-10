#include "AWeapon.hpp"


AWeapon::AWeapon() : m_name(""), m_apcost(0), m_damage(0)
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:
m_name(name),
m_apcost(apcost),
m_damage(damage)
{

}

AWeapon::AWeapon(AWeapon const &copy)
{
	m_name = copy.get_name();
	m_damage = copy.get_Damage();
	m_apcost = copy.get_APCost();
}

AWeapon & AWeapon::operator = (const AWeapon& op)
{
	if (this != &op)
	{
		m_name = op.get_name();
		m_damage = op.get_Damage();
		m_apcost = op.get_APCost();
	}
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string  const &AWeapon::get_name() const
{
	return m_name;
}

int AWeapon::get_APCost() const
{
	return m_apcost;
}

int AWeapon::get_Damage() const
{
	return m_damage;
}
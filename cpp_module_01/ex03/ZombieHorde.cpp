#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	assert(n > 0);
	srand((unsigned) time(0));
	m_type = "Brodyaga";
	m_n = n;
	m_zomb = new Zombie[n];
	for (int i = 0; i < n; i++)
		random_zombi(m_zomb[i]);
}

ZombieHorde::~ZombieHorde()
{
	delete[] m_zomb;
	std::cout <<COLOR_MAGENTA "😎"  "Zombi Bratva poshla kaiyfovat'\n";
}

int	random_nb()
{
	return (rand() % 10);
}

void	ZombieHorde::random_zombi(Zombie& new_zomb)
{
	
	std::string name[10] = { "Edik", "Sanya", "Danya", "Davlet", "Petr", "Andrey", 
		"Lich", "Jeka", "Ilnur", "Khabib"};
	new_zomb.init_zombi(name[random_nb()], m_type);
	
}

void	ZombieHorde::announce_all()
{
	for (int i = 0; i < m_n; i++)
		m_zomb[i].announce();
}
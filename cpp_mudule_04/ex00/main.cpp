#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Zombaki.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "---------------------------------" << std::endl;

	Zombak edik("Eduard");
	std::cout << edik;
	robert.polymorph(edik);
	return 0;
}
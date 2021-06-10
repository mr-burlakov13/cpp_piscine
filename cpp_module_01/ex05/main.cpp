#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human bob;
	std::cout << COLOR_GREEN << bob.identify() << std::endl;
	std::cout << COLOR_YELLOW << bob.getBrain().identify() << std::endl;
}
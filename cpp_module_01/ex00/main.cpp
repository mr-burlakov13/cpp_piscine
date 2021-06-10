#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *heap;
	heap = new Pony;
	std::cout <<  COLOR_YELLOW"Pony On The Heap says:" << std::endl;
	heap->set_name("Heap");
	heap->say_hello();
	heap->say_bye();
	delete(heap);
}

void	ponyOnTheStack()
{
	Pony heap;
	std::cout <<  COLOR_CYAN"Pony On The Stack says:" << std::endl;
	heap.set_name("Stack");
	heap.say_hello();
	heap.say_bye();
}

int	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
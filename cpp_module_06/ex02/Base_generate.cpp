#include "Base.hpp"

Base * generate(void) 
{
    int random;

    srand(time(NULL));
    random = rand();
    if (random % 3 == 0)
        return (new A);
    else if (random % 3 == 1)
        return (new B);
    return (new C);
};
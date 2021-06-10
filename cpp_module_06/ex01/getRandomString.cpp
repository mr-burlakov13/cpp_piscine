#include "Serialize.hpp"

std::string getRandomString(int increaseRandom)
{
    std::string     str;
    unsigned int    random;

    char const *array = "qwertsdfghjklzxvbnmyuiopaQWEOPASDFGHJKLZRTYUIXVBNM";
    for (int i = 0; i < 10; i++)
    {
        random = (rand() + increaseRandom) % 50; 
        str += array[random];
    }
    return (str);
}

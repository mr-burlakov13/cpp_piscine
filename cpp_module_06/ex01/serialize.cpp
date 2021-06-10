#include "Serialize.hpp"

void * serialize(void)
{
    Data *result = new Data;

    srand(time(NULL));

    result->i = rand();
    result->str1 = getRandomString(1);
    result->str2 = getRandomString(6);
    std::cout << "random string 1 BEFORE serialization: " << COLOR_GREEN << result->str1 << COLOR_RESET << std::endl;
    std::cout << "random int BEFORE serialization:      " << COLOR_GREEN << result->i << COLOR_RESET << std::endl;
    std::cout << "random string 2 BEFORE serialization: " << COLOR_GREEN << result->str2 << COLOR_RESET << std::endl;
    std::cout << COLOR_CYAN"------------------------------------------------"COLOR_RESET << std::endl;
    return (reinterpret_cast<void *>(result));
}
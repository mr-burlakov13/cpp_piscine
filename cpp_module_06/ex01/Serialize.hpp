#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <time.h>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

struct Data;

std::string getRandomString(int increaseRandom);
void * serialize(void);
Data * deserialize(void * raw);

struct Data
{
    std::string str1;
    int         i;
    std::string str2;
};

#endif
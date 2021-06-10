#ifndef WHATEVER_HPP
# define WHATEVER_HPP


# include <iostream>
# include <string>
# include <sstream>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"


template <typename T> 
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

template <typename T> 
const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

template <typename T> 
void swap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}




#endif
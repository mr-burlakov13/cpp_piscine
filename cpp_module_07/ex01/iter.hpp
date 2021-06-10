#ifndef ITER_HPP
# define ITER_HPP


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

template<typename T>
void f(T tmp)
{
    std::cout << COLOR_GREEN << tmp << std::endl;
}

template<typename T>
void func(T (*mas), size_t len, void( *f)(T &))
{
    for (size_t i = 0; i < len; i++)
        f(mas[i]);
}

#endif
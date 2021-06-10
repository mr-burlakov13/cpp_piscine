#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

#include <iostream>
#include <algorithm>
#include <vector>


class Exep_erorr : public std::exception
{
    virtual const char* what() const throw()
    { 
        return (COLOR_RED"the given number was not found."COLOR_RESET);
    }
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
	    return (std::find(container.begin(), container.end(), value));
    else
        throw Exep_erorr();
}

#endif
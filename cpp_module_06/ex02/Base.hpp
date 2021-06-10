#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <time.h>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"


class Base;


class Base {
public:
    virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

void identify_from_pointer(Base * p);
void identify_from_reference(Base & p);
Base * generate(void);

#endif
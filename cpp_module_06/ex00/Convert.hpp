#ifndef CONVERT_HPP
# define CONVERT_HPP

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

#include <iostream>


int getError(char * str);
int f_Digit(std::string str);
int f_Char(char *str);
int f_Exception(char *str);
char * find_Exception(char * str);
int isPrintable(char c);
int getIsDot(char const *s);
void ex();
int valid(int argc, char * str);
#endif
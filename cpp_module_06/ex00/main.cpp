#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (valid(argc, argv[1]) == 0)
        ex();
    if (isdigit(argv[1][0]) || argv[1][0] == '-' || argv[1][0] == '+')
        return (f_Digit(argv[1]));
    else if (!argv[1][1])
        return (f_Char(argv[1]));
    else if (find_Exception(argv[1]))
        return (f_Exception(argv[1]));
    else
        ex();
    return (0);
}
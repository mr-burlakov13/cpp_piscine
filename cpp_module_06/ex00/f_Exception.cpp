#include "Convert.hpp"

int f_Exception(char *str)
{
    std::string tmp;
    
    tmp = find_Exception(str);
    std::cout << COLOR_YELLOW"char: impossible"COLOR_RESET << std::endl;
    std::cout << COLOR_GREEN"int: impossible"COLOR_RESET << std::endl;
    if (tmp[tmp.length() - 1] == 'f' && tmp[tmp.length() - 2] == 'f')
    {
        std::cout << COLOR_MAGENTA"float: " << tmp << COLOR_RESET << std::endl;
        tmp.resize(tmp.length() - 1);
        std::cout << COLOR_BLUE"double: " << tmp << COLOR_RESET << std::endl;
    }
    else
    {
        std::cout << COLOR_MAGENTA"float: " << tmp << "f"COLOR_RESET << std::endl;
        std::cout << COLOR_BLUE"double: " << tmp << COLOR_RESET << std::endl;
    }
    return (0);
}
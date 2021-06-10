#include "Convert.hpp"

int f_Char(char *str)
{
    char c;
    
    c = str[0];
    if (!isPrintable(c))
        std::cout << "char: not displayable 🤷‍♂" << std::endl;
    else
        std::cout << COLOR_YELLOW"char: '" << c << "'"COLOR_RESET << std::endl;
    std::cout << COLOR_GREEN"int: " << static_cast<int>(c) << COLOR_RESET << std::endl;        
    std::cout << COLOR_MAGENTA"float: " << static_cast<float>(c) << ".0f"COLOR_RESET << std::endl;
    std::cout << COLOR_BLUE"double: " << static_cast<double>(c) << ".0"COLOR_RESET << std::endl;
    return (0);
}
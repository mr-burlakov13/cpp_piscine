#include "Convert.hpp"

int f_Digit(std::string str)
{
    int i = 0; char c; float f; double d;

    try {
        c = static_cast<char>(std::stoi(str, 0, 10));
        i = static_cast<int>(std::stoi(str, 0, 10));
        f = static_cast<float>(std::stof(str, 0));
        d = static_cast<double>(std::stod(str, 0));
    }
    catch (std::out_of_range & ex) {
        std::cout << ex.what() << std::endl; return (1);
    }
    if (!isPrintable(c))
        std::cout << COLOR_YELLOW"char: not displayable 🤷‍"COLOR_RESET << std::endl;
    else
        std::cout << COLOR_YELLOW"char: '" << c << "'"COLOR_RESET << std::endl;
    std::cout << COLOR_GREEN"int: " << i << COLOR_RESET << std::endl;
    if (str.find('.'))
    {
        if (i == f)
        {
            std::cout << COLOR_MAGENTA"float: " << f << ".0f"COLOR_RESET << std::endl;
            std::cout << COLOR_BLUE"double: " << d << ".0"COLOR_RESET << std::endl;
        }
        else
        {
            std::cout << COLOR_MAGENTA"float: " << f << "f"COLOR_RESET << std::endl;
            std::cout << COLOR_BLUE"double: " << d <<  COLOR_RESET <<std::endl;
        }
    }
    else
    {
        std::cout << COLOR_MAGENTA"float: " << f << ".0f"COLOR_RESET << std::endl;
        std::cout << COLOR_BLUE"double: " << d << ".0"COLOR_RESET << std::endl;
    }
    return (0);
}
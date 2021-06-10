#include "Convert.hpp"


void ex()
{
    std::cout << COLOR_RED"Error. Wrong argument: you can pass char, int, float or double."COLOR_RESET << std::endl;
    exit(1);
}

int valid(int argc, char * str)
{
    int i = 0;

    if (argc != 2)
    {
        std::cout <<  COLOR_RED"Error. Wrong number of argunments."COLOR_RESET << std::endl;
        exit(1);
    }
    if (str[0] == '-' || str[0] == '+')
        while(str[++i])
            if (isdigit(str[i]) == 0)
                return 0;
    if (getError(str) && !find_Exception(str))
        return (0);
    return 1;
}

int isPrintable(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
};

char * find_Exception(char * str)
{
    static char array[6][6] = {"inf", "-inf", "inff", "-inff", "nan", "nanf",};
    int i = 0;
    unsigned int minus = 0;

    std::string ret;
    
    for (; str[i] == '-' || str[i] == '+'; i++)
    {
        if (str[i] == '-')
            minus++;
    }
    str += i;
    if (minus % 2 != 0)
        ret = "-";
    ret += str;

    for (i = 0; i < 8; i++)
    {
        if (ret.compare(array[i]) == 0)
            return (array[i]);
    }
    return (NULL);
};

int getError(char * str)
{
    int dot = 0;
    int i = 0;
    int tmp_i;

    while (str[i] == '-' || str[i] == '+')
        i++;
    tmp_i = i;
    while (str[i] && isdigit(str[i]))
    {
        if (str[i + 1] == '.' && !dot)
        {
            i++;
            dot = 1;
        }
        i++;
    }
    
    if (tmp_i == i && find_Exception(str))
        return (0);
    else if (!str[i] || (str[i] == 'f' && !str[i + 1]))
        return (0);
    else if (tmp_i == i && str[i] && !str[i + 1])
        return (0);

    return (1);
};
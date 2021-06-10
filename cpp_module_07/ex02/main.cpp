#include "Array.hpp"

int main()
{
    Array<std::string> mas_str(3);

    mas_str[0] = "lol";
    mas_str[1] = "kek";
    mas_str[2] = "cheburek";

    for (size_t i = 0; i < mas_str.size(); i++)
        std::cout << "mas_str[" << i << "] = " << COLOR_GREEN <<mas_str[i] << COLOR_RESET << std::endl;

    std::cout << std::endl;
    std::cout << COLOR_YELLOW"Copy mas_str :"COLOR_RESET << std::endl;
    Array<std::string> mas_str_copy(mas_str);
    mas_str[0] = "edik";
    std::cout << "mas_strcopy[0] = " << COLOR_GREEN << mas_str_copy[0] << COLOR_RESET << std::endl;
    std::cout << "mas_str[0] = " << COLOR_GREEN << mas_str[0] << COLOR_RESET << std::endl;

    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET << std::endl;

    Array<int> mas_int(5);
    std::cout << std::endl;
    for (size_t i = 0; i < mas_int.size(); i++)
        std::cout << "mas_int" << i << " = " << COLOR_GREEN << mas_int[i] << COLOR_RESET << std::endl;

    std::cout << COLOR_YELLOW"operator = :"COLOR_RESET << std::endl;
    Array<int> mas_int2 = mas_int;
    for (size_t i = 0; i < mas_int.size(); i++)
        std::cout << "intassign[" << i << "] = " << COLOR_GREEN << mas_int2[i] << COLOR_RESET << std::endl;

    std::cout << std::endl;
    std::cout << COLOR_YELLOW"mas with data: "COLOR_RESET << std::endl;
    for (size_t i = 1; i < mas_int2.size(); i++)
        mas_int2[i] = mas_int2[i - 1] + 13;
    for (size_t i = 0; i < mas_int2.size(); i++)
        std::cout << "intassign[" << i << "] = " << COLOR_GREEN << mas_int2[i] << COLOR_RESET << std::endl;

    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET << std::endl;

    std::cout << std::endl;
    std::cout << COLOR_YELLOW"Exception: "COLOR_RESET << std::endl;
    try
	{
		mas_int[mas_int.size()] = 200;
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << '\n';
	}
}
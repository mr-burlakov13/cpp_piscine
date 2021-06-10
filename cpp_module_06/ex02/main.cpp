#include "Base.hpp"

int main()
{
    Base *check;

    check = generate();
    std::cout << "Identify from "COLOR_GREEN"POINTER     "COLOR_RESET;
    identify_from_pointer(check);
    std::cout << "Identify from "COLOR_YELLOW"REFERENCE   "COLOR_RESET;
    identify_from_reference(*check);
}
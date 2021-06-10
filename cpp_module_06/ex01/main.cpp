#include "Serialize.hpp"

int main()
{
    Data *data;
    void *raw;

    raw = serialize();
    data = deserialize(raw);

    std::cout << COLOR_YELLOW"The size of structure 'Data' is " << sizeof(Data) << COLOR_RESET << std::endl;
    std::cout << "random string 1 AFTER serialization: " << COLOR_GREEN << data->str1 << COLOR_RESET << std::endl;
    std::cout << "random int AFTER serialization:      " << COLOR_GREEN << data->i << COLOR_RESET << std::endl;
    std::cout << "random string 2 AFTER serialization: " << COLOR_GREEN << data->str2 << COLOR_RESET << std::endl;
    // std::cout << sizeof(data->str1);
    // std::cout << sizeof(data->str2);
    // std::cout << sizeof(data->i);
    delete static_cast<char*>(raw);
}
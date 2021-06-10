#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector;

    myVector.push_back(3);
    myVector.push_back(13);
    myVector.push_back(33);
    myVector.push_back(13);
    myVector.push_back(63);

    std::vector<int>::iterator nb = easyfind(myVector, 13);
    std::cout <<COLOR_GREEN << *nb << std::endl;
    std::cout << *(nb -1) << std::endl;
    try
    {
        nb = easyfind(myVector, 133);
        std::cout << *nb << std::endl;
    }
    catch (std::exception & exc)
    {
        std::cout << exc.what() << std::endl;
    }

    try
    {
        nb = easyfind(myVector, 33);
        std::cout <<COLOR_GREEN << *nb << std::endl;
    }
    catch (std::exception & exc)
    {
        std::cout << exc.what() << std::endl;
    }

    try
    {
        nb = easyfind(myVector, 333);
        std::cout <<COLOR_GREEN << *nb << std::endl;
    }
    catch (std::exception & exc)
    {
        std::cout << exc.what() << std::endl;
    }

    myVector.clear();
}
#include "mutantstack.hpp"

int main()
{
    MutantStack<int>    my_stack;

    my_stack.push(100);
    my_stack.push(99);

    std::cout << COLOR_GREEN"TOP"COLOR_RESET" : " << my_stack.top() << std::endl;

    my_stack.pop();

    std::cout << COLOR_GREEN"TOP"COLOR_RESET" : " << my_stack.top() << std::endl;

    std::cout << COLOR_GREEN"SIZE"COLOR_RESET" : " << my_stack.size() << std::endl;

    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET <<std::endl;


    my_stack.push(13);
    my_stack.push(15);
    my_stack.push(17);
    my_stack.push(28);


    for (MutantStack<int>::iterator i = my_stack.begin();i  != my_stack.end(); i++)
        std::cout << *i << std::endl;

    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET <<std::endl;


    for (MutantStack<int>::reverse_iterator i = my_stack.rbegin(); i != my_stack.rend(); i++)
        std::cout << *i << std::endl;

    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET <<std::endl;
    
    std::list<int>    list;
    
    list.push_back(100);
    list.push_back(99);

    std::cout << COLOR_GREEN"TOP"COLOR_RESET" = " << list.back() << std::endl;

    list.pop_back();

    std::cout << COLOR_GREEN"Size"COLOR_RESET" = " << list.size() << std::endl;

    list.push_back(13);
    list.push_back(15);
    list.push_back(17);
    list.push_back(28);

    for (std::list<int>::iterator i = list.begin(); i != list.end(); i++)
        std::cout << *i << std::endl;

    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET <<std::endl;
    

    for (MutantStack<int>::reverse_iterator i = my_stack.rbegin(); i  != my_stack.rend(); i++)
        std::cout << *i << std::endl;
    
    std::cout << COLOR_CYAN"--------------------------"COLOR_RESET <<std::endl;


    for (std::list<int>::reverse_iterator i = list.rbegin(); i != list.rend(); i++)
        std::cout << *i << std::endl;
  
    return 0;
}
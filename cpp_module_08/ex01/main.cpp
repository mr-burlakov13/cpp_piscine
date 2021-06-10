#include "span.hpp"

int main()
{
    span sp = span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << COLOR_GREEN << sp.shortestSpan() << COLOR_RESET << std::endl;
    std::cout << COLOR_GREEN << sp.longestSpan() << COLOR_RESET << std::endl;

    std::cout << COLOR_CYAN"---------------------------------------"COLOR_RESET <<std::endl;


    try
    {
        sp.addNumber(80);
        std::cout  << sp.shortestSpan()  << std::endl;
        std::cout  << sp.longestSpan()  << std::endl;
    }
    catch (std::exception & exc)
    {
        std::cout << exc.what() << std::endl;
    }

    std::cout << COLOR_CYAN"---------------------------------------"COLOR_RESET <<std::endl;

    span sp2 = span(1);
    sp2.addNumber(3);
    try
    {
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception & exc)
    {
        std::cout << exc.what() << std::endl;
    }

    std::cout << COLOR_CYAN"---------------------------------------"COLOR_RESET <<std::endl;

    span sp3 = span(50000);
    std::vector<int> range(50000);
    range[2] = 13;
    try
    {
        sp3.addNumber(range.begin(), range.end());
        std::cout << COLOR_GREEN  << sp3.longestSpan();
    }
    catch (std::exception & exc)
    {
        std::cout << exc.what() << std::endl;
    }
}
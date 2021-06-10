#ifndef SPAN_HPP
# define SPAN_HPP


# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

class span
{
    private:
    size_t m_len;
    std::vector<int>    m_my_vector;
    public:
        span(unsigned int const & N);
        span(const span& copy);
        span &operator=(const span& op);
        virtual ~span();

        void       addNumber(int);
        int        shortestSpan();
        int        longestSpan();

    class Data_Full : public std::exception
    {
        virtual const char* what() const throw()
        { 
            return (COLOR_RED"I apologize, but the data no longer carries ((."COLOR_RESET); 
        }
    };
    class Blank_vector : public std::exception
    {
        virtual const char* what() const throw() 
        { 
            return (COLOR_RED"too few numbers in the vector, you need at least 2."COLOR_RESET);
        }
    };
    class Data_range : public std::exception
    {
        virtual const char* what() const throw() 
        { 
            return (COLOR_RED"the range is too small (("COLOR_RESET); 
        }
    };
    template < class Iterator >
    void        addNumber(Iterator begin, Iterator end)
    {
        if (end - begin <= m_len)
            std::copy(begin, end, std::back_inserter(m_my_vector));
        else
            throw(Data_range());
    }
};



#endif
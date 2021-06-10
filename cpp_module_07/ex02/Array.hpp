#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <sstream>

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

template<typename T>
class Array
{
private:
    T *m_arr;
    unsigned int m_n;
public:
    Array() : m_arr(nullptr){};
    Array(unsigned int n) : m_n(n)
    {
        m_arr = new T[n]();
    };
    Array(Array const &copy)
    {
        if (copy.m_n > 0)
        {
            m_arr = new T[copy.m_n]();
            for (unsigned int i = 0; i < copy.m_n; i++)
                m_arr[i] = copy.m_arr[i];
        }
        m_n = copy.m_n;
    }
    virtual ~Array()
    {
        if (m_n > 0)
            delete[] m_arr;
    };

    class ArrayExcep: public std::exception
    {
        virtual const char* what() const throw()
        {
            return COLOR_RED"ArrayException: index erorr"COLOR_RESET;
            exit(1);
        };
	};

    Array &operator=(Array const &op)
    {
        if (this == op)
            return this;
        if (op.length > 0)
	    {
		    m_arr = new T[op.m_n]();
		    for (unsigned int i = 0; i < op.m_n; i++)
			    m_arr[i] = op.m_arr[i];
	    }
	    m_n = op.m_n;
	    return (*this);
    };

    T &operator[](unsigned int index)
    {
        if (index >= m_n)
		    throw ArrayExcep();
	    return (m_arr[index]);
    };

    size_t size(void) const
    {
        return m_n;
    };

};



#endif
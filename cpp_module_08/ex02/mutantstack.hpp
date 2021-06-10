#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
#include <stack>
#include <list>

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack() : std::stack<T>() 
        {

        };

        MutantStack(const MutantStack& copy) : std::stack<T>(copy)
        {

        };

        virtual ~MutantStack() 
        {

        };

        MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };
	
        
        iterator begin() 
        { 
            return (std::stack<T>::c.begin()); 
        }

       
        const_iterator begin() const 
        { 
            return (std::stack<T>::c.begin()); 
        }
        
        
        iterator end() 
        { 
            return (std::stack<T>::c.end()); 
        }

        
        const_iterator end() const 
        { 
            return (std::stack<T>::c.end()); 
        }

      
        reverse_iterator rbegin() 
        { 
            return (std::stack<T>::c.rbegin()); 
        }

       
        const_reverse_iterator rbegin() const 
        { 
            return (std::stack<T>::c.rbegin()); 
        }
        
       
        reverse_iterator rend() 
        { 
            return (std::stack<T>::c.rend()); 
        }

       
        const_reverse_iterator rend() const 
        { 
            return (std::stack<T>::c.rend()); 
        } 
};

#endif
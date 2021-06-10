#include "whatever.hpp"

int main( void ) 
{

    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << COLOR_GREEN"min"COLOR_RESET"( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << COLOR_GREEN"max"COLOR_RESET"( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << COLOR_GREEN"min"COLOR_RESET"( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << COLOR_GREEN"max"COLOR_RESET"( c, d ) = " << ::max( c, d ) << std::endl;

    double q = 7.56;
    double w = 21.434;
    ::swap(q, w);
    std::cout << "q = " << q << ", w= " << w << std::endl;
    std::cout << COLOR_GREEN"min"COLOR_RESET"( q, w ) = " << ::min( q, w ) << std::endl;
    std::cout << COLOR_GREEN"max"COLOR_RESET"( q, w ) = " << ::max( q, w ) << std::endl;
    
    return 0;
}
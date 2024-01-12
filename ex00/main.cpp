#include "whatever.hpp"
#include <iostream>

class Test {

    public:
        ~Test( void ) {};
        Test( int n ) : _n(n) {}
        Test& operator=(Test& cpy) {
            _n = cpy._n;
            return *this;
        }
        bool operator==(Test const & rhs) const { return (this->_n == rhs._n); }
        bool operator!=(Test const & rhs) const { return (this->_n != rhs._n); }
        bool operator<(Test const & rhs) const { return (this->_n < rhs._n); }
        bool operator>(Test const & rhs) const { return (this->_n > rhs._n); }
        bool operator<=(Test const & rhs) const { return (this->_n <= rhs._n); }
        bool operator>=(Test const & rhs) const { return (this->_n >= rhs._n); }
        int getN() const { return _n; }
    
    private:
        int _n;
};

std::ostream & operator<<(std::ostream & os, const Test & rhs) {
    os << rhs.getN();
    return os;
}

int main() 
{
    {
        std::cout << "#---------- Subject tests ----------#" << std::endl << std::endl;
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    {
        std::cout << std::endl << "#---------- Complex tests ----------#" << std::endl << std::endl;
        Test a(127);
        Test b(-0);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

        std::cout << std::endl << "swap..." << std::endl << std::endl;
        ::swap(a, b);

        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    }
}
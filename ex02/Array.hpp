#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template < typename T >
class Array {
    public:
        Array( void );
        ~Array( void );
        Array( unsigned int n );
        Array(const Array& cpy);
        Array<T>& operator=(const Array& rhs);
        T& operator[](unsigned int i);
        unsigned int size( void ) const;

    private :
        T * _tab;
        unsigned int _n;
};

#include "Array.tpp"

#endif
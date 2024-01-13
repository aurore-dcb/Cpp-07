#ifndef ITER_H
# define ITER_H
#include <iostream>

template< typename T >
void displayArray(const T& elem) {
    std::cout << elem << std::endl;
}

template< typename T, typename F >
void iter(T * array, size_t len, F fct) {
    for (size_t i = 0 ; i < len ; i++) {
        fct(array[i]);
    }
}

#endif
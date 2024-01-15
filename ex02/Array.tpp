
template <typename T>
Array<T>::Array( void ) {
    _tab = NULL;
}

template <typename T>
Array<T>::Array( unsigned int n ) {
    _tab = new T[n];
    _n = n;
    for (unsigned int i = 0 ; i < n ; i++) {
        _tab[i] = 0;
    }
}

template <typename T>
Array<T>::~Array( void ) {
    if (_tab) {
        delete[] _tab;
    }
}

template <typename T>
Array<T>::Array(const Array& cpy) {
    if (cpy._tab) {
        _n = cpy._n;
        _tab = new T[_n];
        for (unsigned int i = 0 ; i < _n ; i++) {
            _tab[i] = cpy._tab[i];
        }
    } else {
        _tab = NULL;
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs) {
    if (this != &rhs) {
        _n = rhs._n;
        if (rhs._tab) {
            delete[] _tab;
            _tab = new T[_n];
            for (unsigned int i = 0 ; i < rhs._n ; i++) {
                _tab[i] = rhs._tab[i];
            }
        } else {
            _tab = NULL;
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {
    if (i < 0 || i >= _n) {
        throw std::out_of_range("Index out of range");
    }
    return _tab[i];
}

template <typename T>
unsigned int Array<T>::size( void ) const {
    return _n;
}

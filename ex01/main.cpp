#include "iter.hpp"

int main() {

    std::cout << "# --------- int array --------- #" << std::endl;
    int intArray[] = {11, 22, 33, 44, 55};
    size_t intArrayLen = sizeof(intArray) / sizeof(int);
    iter(intArray, intArrayLen, displayArray<int>);

    std::cout << std::endl;
    std::cout << "# --------- double array --------- #" << std::endl;
    double doubleArray[] = {1.1, 2.2, 3.3};
    size_t doubleArrayLen = sizeof(doubleArray) / sizeof(double);
    iter(doubleArray, doubleArrayLen, displayArray<double>);

    std::cout << std::endl;
    std::cout << "# --------- string array --------- #" << std::endl;
    std::string stringArray[] = {"one", "two", "three", "four", "five"};
    size_t stringArrayLen = sizeof(stringArray) / sizeof(std::string);
    iter(stringArray, stringArrayLen, displayArray<std::string>);
    return (0);
}

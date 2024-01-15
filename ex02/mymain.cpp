#include "Array.hpp"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define RESET_COLOR "\033[0m"

int main() {

    Array<int> empt; // constructeur qui cree un tableau vide

    std::cout << "#--------init--------#" << std::endl;

    unsigned int size = 10;
    Array<int> nums(size);
    for (unsigned int i = 0; i < size ; i++) {
        nums[i] = i+1; // acces a des cases du tableau
    }
    std::cout << std::endl;
    std::cout << "nums size = " << nums.size() << std::endl; // utilisation de size
    for (unsigned int i = 0 ; i < nums.size() ; i++) {
        std::cout << nums[i] ;
        if (i < nums.size() - 1)
            std::cout << " | ";
    }

    std::cout << std::endl << std::endl << "#--------copy--------#" << std::endl << std::endl;

    Array<int> cpy(nums); // constructeur de copie
    std::cout << "modifying cpy... (+10)" << std::endl;
    for (unsigned int i = 0; i < size ; i++) {
        cpy[i] = i+10;
    }
    std::cout << "NUMS :" << std::endl;
    for (unsigned int i = 0 ; i < nums.size() ; i++) {
        std::cout << nums[i] ;
        if (i < nums.size() - 1)
            std::cout << " | ";
    }
    std::cout << std::endl << "CPY :" << std::endl;
    for (unsigned int i = 0 ; i < cpy.size() ; i++) {
        std::cout << cpy[i] ;
        if (i < cpy.size() - 1)
            std::cout << " | ";
    }

    std::cout << std::endl << std::endl << "#------operator------#" << std::endl << std::endl;
    empt = nums; // operateur d'assignation
    std::cout << "EMPT :" << std::endl;
    for (unsigned int i = 0 ; i < empt.size() ; i++) {
        std::cout << empt[i] ;
        if (i < empt.size() - 1)
            std::cout << " | ";
    }

    std::cout << std::endl << std::endl << "#-------access-------#" << std::endl << std::endl;
    try {
        std::cout << "trying to access nums[-2] ..." << std::endl;
        std::cout << nums[-2] << std::endl;
        std::cout << GREEN << "It worked !" << RESET_COLOR << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << RED << e.what() << RESET_COLOR << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "trying to access nums[0] ..." << std::endl;
        std::cout << nums[0] << std::endl;
        std::cout << GREEN << "It worked !" << RESET_COLOR << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << RED << e.what() << RESET_COLOR << std::endl;
    }

    std::cout << std::endl;
    
    try {
        std::cout << "trying to access nums[14] ..." << std::endl;
        std::cout << nums[14] << std::endl;
        std::cout << GREEN << "It worked !" << RESET_COLOR << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << RED << e.what() << RESET_COLOR << std::endl;
    }

    return 0;
}
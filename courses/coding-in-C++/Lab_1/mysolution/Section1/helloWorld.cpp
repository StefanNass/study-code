#include <iostream>
#include "header.hpp"

void printFromHeader() {
    std::cout << "Hello from .hpp" << std::endl;
}

int main(){
    std::cout << "__Hello World!__" << std::endl;
    printFromHeader();
    return 0;
}
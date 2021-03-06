//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"
#include "bigint.cpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    
    bigint lhs;
    bigint rhs;

    while (in >> lhs && in >> rhs){
      std::cout << "Left- " << lhs << std::endl;
      std::endl;
      std::cout << "Right- " << rhs << std::endl;
      bigint added = lhs + rhs;
      std::cout << "Added- " << added << std::endl;
    }

    in.close();
    return 0;
}


//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-2.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    
    bigint right;
    bigint left;

    while (in >> left && in >> right){
      std::cout << "Right - " << right << std::endl;
      std::cout << "Left - " << left << std::endl;

      bigint result = left * right;

      std::cout << "Result - " << result << std::endl;

    }

    in.close();
    return 0;
}


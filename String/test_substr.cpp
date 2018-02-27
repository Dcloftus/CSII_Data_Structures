//  String class test program
//
//  Tests: find string
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	{
                // Setup
                String str1("abcdefg");

                // Test & Verify
                assert(str1.substr(0,3) == "abcd");
                
        }
        std::cout << "--Done Testing SUBSTRING" << std::endl;
}
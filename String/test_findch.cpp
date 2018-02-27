//  String class test program
//
//  Tests: find char
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
		{
                // Setup
                String str1("abc");

                // Test & Verify
                assert(str1.findch(0, 'a') == 0);
        }
        {
                // Setup
                String str1("abcdefg");

                // Test & Verify
                assert(str1.findch(4, 'e') == 4);
        }
        {
                // Setup
                String str1("abcdefg");

                // Test & Verify
                assert(str1.findch(2, 'c') == 2);
        }
        {
                // Setup
                String str1("abcdefg");

                // Test & Verify
                assert(str1.findch(1, 'b') == 1);
        }
        std::cout << "--Done Testing FINDCHAR" << std::endl;
}
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
                String str1;

                // Test & Verify
                assert(str1 == "");
                assert(str1.findstr(0,"This") == -1);
                assert(str1.findstr(0,"\0") == -1);
        }
        {
                // Setup
                String str1("abcdef");

                // Test & Verify
                assert(str1.findstr(0,"abc") == 0);
                assert(str1.findstr(1,"bcde") == 1); 
        }
        {
                // Setup
                String str1("abcdefghijklmnopqrstuvwxyz");

                // Test & Verify
                assert(str1.findstr(13,"nopq") == 13);
                assert(str1.findstr(2,"cde") == 2); 
        }
        {
                // Setup
                String str1("abcdefhijk");

                // Test & Verify
                assert(str1.findstr(5,"fhi") == 5);
                assert(str1.findstr(1,"bc") == 1); 
        }
        std::cout << "--Done Testing FIND STRING" << std::endl;
}
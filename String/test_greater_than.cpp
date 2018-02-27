//  String class test program
//
//  Tests: Greater Than
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1 = "a";
		String str2 = "z";

        // VERIFY
        assert(str1 > str2);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1 = "fd";
		String str2 = "z";

        // VERIFY
        assert(str1 > str2);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1 = "az";
		String str2 = "zz";

        // VERIFY
        assert(str1 > str2);
	}
        std::cout << "--Done Testing GREATER THAN" << std::endl;
}
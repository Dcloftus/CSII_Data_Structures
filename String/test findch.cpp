//  String class test program
//
//  Tests: Less Than
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1, str2;

        // VERIFY
        assert(str1 <= str2);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1 = "f";
		String str2 = "a";

        // VERIFY
        assert(str1 <= str2);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1 = "z";
		String str2 = "dc";

        // VERIFY
        assert(str1 <= str2);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1 = "zz";
		String str2 = "az";

        // VERIFY
        assert(str1 <= str2);
	}
}
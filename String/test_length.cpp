//  String class test program
//
//  Tests: Length
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
	String str;

        // VERIFY
        assert(str.length() == 0);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
	String str('a');

        // VERIFY
        assert(str.length() == 1);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
	String str("abc");

        // VERIFY
        assert(str.length() == 3);
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
	String str("test length of sentance");

        // VERIFY
        assert(str.length() == 23);
	}
        std::cerr << "--Done testing LENGTH" << std::endl;
}



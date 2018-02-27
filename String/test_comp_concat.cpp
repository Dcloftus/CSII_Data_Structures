//  String class test program
//
//  Tests: Compound Concatination
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2;
        // TEST
		str1 = str1 + str2;

        // VERIFY
        assert(str1 == 'a');
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1, str2('b');
        // TEST
		str1 = str1 + str2;

        // VERIFY
        assert(str1 == 'b');
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2('b');
        // TEST
		str1 = str1 + str2;

        // VERIFY
        assert(str1 == "ab");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("abc"), str2;
        // TEST
		str1 = str1 + str2;

        // VERIFY
        assert(str1 == "abc");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1, str2("def");
        // TEST
		str1 = str1 + str2;

        // VERIFY
        assert(str1 == "def");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("abc"), str2("def");
        // TEST
		str1 = str1 + str2;

        // VERIFY
        assert(str1 == "abcdef");
	}
	
        std::cout << "--Done Testing COMPOUND CONCAT " << std::endl;
}
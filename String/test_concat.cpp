//  String class test program
//
//  Tests: Addition
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2, concat;
        // TEST
		concat = str1 + str2;

        // VERIFY
        assert(str1 == 'a');
        assert(str2 == '\0');
        assert(concat == 'a');
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1;
                String str2('b');
                String concat;
        // TEST
		concat = str1 + str2;
                
        // VERIFY
        assert(str1 == '\0');
        assert(str2 == 'b');
        assert(concat == 'b');
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2('b'), concat;
        // TEST
		concat = str1 + str2;

        // VERIFY
        assert(str1 == 'a');
        assert(str2 == 'b');
        assert(concat == "ab");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2("bcd"), concat;
        // TEST
		concat = str1 + str2;
        // VERIFY
        assert(str1 == 'a');
        assert(str2 == "bcd");
        assert(concat == "abcd");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("abc"), str2('d'), concat;
        // TEST
		concat = str1 + str2;

        // VERIFY
        assert(str1 == "abc");
        assert(str2 == 'd');
        assert(concat == "abcd");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("abc"), str2("def"), concat;
        // TEST
		concat = str1 + str2;

        // VERIFY
        assert(str1 == "abc");
        assert(str2 == "def");
        assert(concat == "abcdef");
	}
        {
        //------------------------------------------------------
        // SETUP FIXTURE
                String str1("abc"), str2(" def"), str3("                    ghi"), concat;
        // TEST
                concat = str1 + str2 + str3;

        // VERIFY
        assert(str1 == "abc");
        assert(str2 == " def");
        assert(concat == "abc def                    ghi");
        }

        std::cout << "--Done Testing CONCAT " << std::endl;
}






















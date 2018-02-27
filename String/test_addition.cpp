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
		String str1, str2, added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "\0");
        assert(str2 == "\0");
        assert(added == "\0");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2, added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "a");
        assert(str2 == "\0");
        assert(added == "a");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1, str2('b'), added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "\0");
        assert(str2 == "b");
        assert(added == "\b");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2('b'), added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "a");
        assert(str2 == "b");
        assert(added == "ab");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1('a'), str2("bcd"), added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "a");
        assert(str2 == "bcd");
        assert(added == "abcd");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("abc"), str2('d'), added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "abc");
        assert(str2 == "d");
        assert(added == "abcd");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("abc"), str2("def"), added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "abc");
        assert(str2 == "def");
        assert(added == "abcdef");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1("hello world"), str2(" how are you"), added;
        // TEST
		added = str1 + str2;

        // VERIFY
        assert(str1 == "hello world");
        assert(str2 == " how are you");
        assert(added == "hello world how are you");
	}
}






















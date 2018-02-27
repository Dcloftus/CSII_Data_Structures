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
		String str1;
		std::cout << "TYPE a " << std::endl;
		std::cin >> str1;

        // VERIFY
        assert(str1 == "a");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1;
		std::cout << "TYPE abc " << std::endl;
		std::cin >> str1;

        // VERIFY
        assert(str1 == "abc");
	}
	{
        //------------------------------------------------------
        // SETUP FIXTURE
		String str1;
		std::cout << "TYPE abcdefg " << std::endl;
		std::cin >> str1;

        // VERIFY
        assert(str1 == "abcdefg");
	}
	std::cout << "--Done Testing INPUT" << std::endl;
}
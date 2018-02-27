//  String class test program
//
//  Tests: capacity
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	{
		//------------------------------------------------------
		//SETUP FIXTURE

		//TEST
		String str;

		//VERIFY
		assert(str.capacity() == 0); // empty string plus the NULL TERMINATOR
	}
	{
		//------------------------------------------------------
		//SETUP FIXTURE

		//TEST
		String str("abc");

		//VERIFY
		assert(str.capacity() == 3); // empty string plus the NULL TERMINATOR
	}
	{
		//------------------------------------------------------
		//SETUP FIXTURE

		//TEST
		String str("abc def");

		//VERIFY
		assert(str.capacity() == 7); // empty string plus the NULL TERMINATOR
	}
	
	std::cout << "--Done testing capacity" << std::endl;
}

//  String class test program
//
//  Tests: Char array constructor
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
		assert(str[0] == '\0');
		assert(str == "");
	}
	{
		//------------------------------------------------------
		//SETUP FIXTURE

		//TEST
		String str (40);

		//VERIFY
		assert(str[0] == '\0');
		assert(str == "");
	}

}
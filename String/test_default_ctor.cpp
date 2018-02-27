//  String class test program
//
//  Tests: Defult constructor
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
		String str ("40");

		//VERIFY
		assert(str[0] == '4');
		assert(str[1] == '0');
		assert(str[2] == '\0');
	}
	{
		//------------------------------------------------------
		//SETUP FIXTURE

		//TEST
		String str ("203");

		//VERIFY
		assert(str[0] == '2');
		assert(str[1] == '0');
		assert(str[2] == '3');
		assert(str[3] == '\0');
	}
	std::cout << "--Done testing DEFAULT" << std::endl;
}

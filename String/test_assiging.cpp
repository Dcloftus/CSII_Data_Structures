//  String class test program
//
//  Tests: Char ctor
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
	{
		// Setup
		String str1;

		// Test
		str1 = 'a';
		// Verify
		assert(str1 == "a");
	}
	{
		// Setup
		String str1 ("testing");

		// Test
		
		// Verify
		assert(str1 == "testing");
	}
	{
		// Setup
		String str1 ("testing a sentance");

		// Test
		
		// Verify
		assert(str1 == "testing a sentance");
	}
	{
		// Setup
		String str1 ("abc");
		String str2 ("abc");

		//test

		// Verify
		assert(str1 == "abc");
		assert(str2 == "abc");
		assert(str1 == str2);
	}
	std::cerr << "--Done testing Assignment " << std::endl;
}
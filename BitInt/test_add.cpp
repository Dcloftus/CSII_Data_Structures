// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
   
    //Add test cases as needed.
    {
      //------------------------------------------------------                         
      // Setup fixture                                                                 
      bigint left(111);
      bigint right(77);
      bigint result;

      // Test                                                                          

      result = left + right;

      // Verify                                                                        

      assert(left == 111);
      assert(right == 77);
      assert(result == 188);
    }
    {
      //------------------------------------------------------                         
      // Setup fixture                                                                 
      bigint left(45);
      bigint right(157);
      bigint result;

      // Test                                                                          

      result = left + right;

      // Verify                                                                        

      assert(left == 45);
      assert(right == 157);
      assert(result == 202);
    }
    {
      //------------------------------------------------------                         
      // Setup fixture                                                                 
      bigint left(235);
      bigint right(147);
      bigint result;

      // Test                                                                          

      result = left + right;

      // Verify                                                                        

      assert(left == 235);
      assert(right == 147);
      assert(result == 382);
    }
    {
      //------------------------------------------------------                         
      // Setup fixture                                                                 
      bigint left(2222);
      bigint right(3333);
      bigint result;

      // Test                                                                          

      result = left + right;

      // Verify                                                                        

      assert(left == 2222);
      assert(right == 3333);
      assert(result == 5555);
    }
    {
      //------------------------------------------------------                         
      // Setup fixture                                                                 
      bigint left(1234);
      bigint right(123);
      bigint result;

      // Test                                                                          

      result = left + right;

      // Verify                                                                        

      assert(left == 1234);
      assert(right == 123);
      assert(result == 1357);
    }
    {
      //------------------------------------------------------                         
      // Setup fixture                                                                 
      bigint left(14504);
      bigint right(12304);
      bigint result;

      // Test                                                                          

      result = left + right;

      // Verify                                                                        

      assert(left == 14504);
      assert(right == 12304);
      assert(result == );
    }
    std::cout << "Done with testing addition." << std::endl;
}


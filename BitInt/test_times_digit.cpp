// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_digit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(23);

        // Test 
        bi = bi.times_digit(2);

        // Verify
        assert(bi == 46);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(356);

        // Test 
        bi = bi.times_digit(3);

        // Verify
        assert(bi == 1068);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(2345);

        // Test 
        bi = bi.times_digit(2);

        // Verify
        assert(bi == 4690);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(12345);

        // Test 
        bi = bi.times_digit(4);

        // Verify
        assert(bi == 49380);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123456);

        // Test 
        bi = bi.times_digit(2);

        // Verify
        assert(bi == 246912);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1234567);

        // Test 
        bi = bi.times_digit(3);

        // Verify
        assert(bi == 3703701);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(12345678);

        // Test 
        bi = bi.times_digit(7);

        // Verify
        assert(bi == 86419746);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123456789);

        // Test 
        bi = bi.times_digit(3);

        // Verify
        assert(bi == 370370367);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1123456789);

        // Test 
        bi = bi.times_digit(3);

        // Verify
        assert(bi == 3370370367);
    }
    
    std::cout << "Done testing bigint * digit" << std::endl;


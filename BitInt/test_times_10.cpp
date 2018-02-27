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
        bi = bi.times_10(0);

        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(13);

        // Test 
        bi = bi.times_10(1);

        // Verify
        assert(bi == 130);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(145);

        // Test 
        bi = bi.times_10(3);

        // Verify
        assert(bi == 145000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3333);

        // Test 
        bi = bi.times_10(2);

        // Verify
        assert(bi == 333300);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(12345);

        // Test 
        bi = bi.times_10(2);

        // Verify
        assert(bi == 1234500);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123456);

        // Test 
        bi = bi.times_10(4);

        // Verify
        assert(bi == 1234560000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1234567);

        // Test 
        bi = bi.times_10(2);

        // Verify
        assert(bi == 123456700);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(12345678);

        // Test 
        bi = bi.times_10(3);

        // Verify
        assert(bi == 12345678000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123456789);

        // Test 
        bi = bi.times_10(7);

        // Verify
        assert(bi == 1234567890000000);
    }

    std::cout << "Done testing times_10" << std::endl;
}


//Daniel Loftus
//test push and pop
//11/1/17

#include "stack.hpp"
#include "../string/string.hpp"

int main() {
  {
    stack<int> test;
    
    test.push(1);

    assert(test.empty() == false);
    assert(test.full() == false);
    assert(test.top() == 1);
  }
  {
    stack<int> test;

    test.push(1);
    test.pop();

    assert(test.empty() == true);
    assert(test.full() == false);
  }
  {
    stack<String> stest;
    
    stest.push("a");

    assert(stest.empty() == false);
    assert(stest.full() == false);
    assert(stest.top() == "a");
  }
  {
    stack<String> stest;

    stest.push("a");
    stest.pop();

    assert(stest.empty() == true);
    assert(stest.full() == false);
  }
  std::cout << "--- Done Testing PUSH and POP!" << std::endl;
}

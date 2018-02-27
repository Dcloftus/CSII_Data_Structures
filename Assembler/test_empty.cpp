//Daniel Loftus
//Empty                                           
//11/1/17                                                                     

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

int main(){
  {
    stack<int> nothing;
    assert(nothing.empty() == true);
  }
  {
    stack<String> nothing;
    assert(nothing.empty() == true);
  }
  std::cout << "---Done Testing Empty!" << std::endl;
}

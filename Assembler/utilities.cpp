//Daniel Loftus
//uilities.cpp
//11/10/17

#include "Utilities.hpp"
#include "../string/string.hpp"

String postfix(String expression) {
  std::vector<String> line = expression.split(' ');
  Stack<String> temp;
  String rhs,oper,lhs, result;
  size_t limit = line.size() - 1;
  if(expression.findchar(0, ';') == -1){
    limit = line.size();
  }
  for(size_t i = 0; i < limit; i++) {
    String token = line[i];
    if(token != ")") {
      if(token != "(") {
	temp.push(token);
      }
    }else {
      rhs = temp.pop();
      oper = temp.pop();
      lhs = temp.pop();
      result = lhs + " " + rhs + " " + oper;
      temp.push(result);
    }
  }
  return temp.top();
}




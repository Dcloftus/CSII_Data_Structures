//Daniel Loftus
//Lab 8 Fibonacci
//10/28/17
//cs23001

#include <iostream>
int fibonacci(int n);
int main() {
  int x = 0;
  int y = 0;

  std::cout << "Please enter a number to be Fibonacci(ed) : " << std::endl;
  std::cin >> x;
  std::cout << "The result is ";

  for (int i = 0; i != x; i++){
    y = fibonacci(i);
    std::cout << y << ", ";
  }
  std::cout << std::endl;
}

int fibonacci(int n){
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

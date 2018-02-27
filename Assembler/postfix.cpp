//Daniel Loftus
//postfix.cpp
//

#include <iostream>
#include <fstream>
#include "utilities.hpp"

int main(int argc, char *argv[]) {
  if (argc == 1){
    std::cerr << "Input file needed!" << std::endl;
    help();
  }

  std::ifstream infix_file(argv[1]);
  if (!infix_file){
    std::cerr << "Couldnt open file " << argv[1] << std::endl;
  }

  if (argc == 3) {
    std::ofstream postfix_file(argv[2]);
    if (!postfix_file){
      std::cerr << "Couldnt output to file" << argv[2] << std::endl;

      String token;
      String infix;
      while (!infix_file.eof()){
	infix_file >> token;
	if (token != ";") {
	  infix = infix + token + " ";
	}else {
	  postfix_file << infix << std::endl;
	  String result = postfix(infix);
	  postfix_file << result << std::endl;
	  infix = "";
	}
      }
      postfix_file.close();
    }
    std::cout << "DONE" << std::endl;
    infix_file.close();
    return 0;
  }
}

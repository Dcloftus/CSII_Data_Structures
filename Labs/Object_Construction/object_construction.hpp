//
//
//
//
//

#ifndef CS2_OBJCONSTRUCT_HPP
#define CS2_OBJCONSTRUCT_HPP

#include <iostream>

class objConstruct{
public:
	objConstruct          ();
	objConstruct          (const objConstruct&);
	~objConstruct         ();
	objConstruct::operator (objConstruct&){
			std::cout << "Called assignment constructor" << std::endl;}
};

#endif

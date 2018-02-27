//Decleration
//
//
//

#include "object_construction.hpp"

objConstruct::objConstruct(){
	std::cout << "Called default constructor" << std::endl;
}
	


objConstruct::objConstruct(const objConstruct&){
	std::cout << "Called copy constructor" << std::endl;
}
	


objConstruct::~objConstruct(){
	std::cout << "Called destructor" << std::endl;
}
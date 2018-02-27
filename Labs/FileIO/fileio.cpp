// Daniel Loftus
//cs23001
//Lab 4
//9-19-17

#include <iostream>
#include <fstream>

void read(std::ifstream& file){
	char ch;
	while(!file.eof()){
		file.get(ch);
		std::cout << ch;
	}
	std::cout << std::endl;
}

void individualRead(std::ifstream& file){
	char ch;
	while(file.get(ch)){
		if(ch != ' '){
			std::cout << ch;
		}
		else{
			std::cout << std::endl;
			break;
		}
	}
}

void add(std::ifstream& file){
	
}

int main(){
	std::ifstream file ("fileio-data-1.txt");				//opening file

	if(!file.is_open()){
		std::cout << "File not open properly" << std::endl;
	}

	read(file);

	file.close();
}


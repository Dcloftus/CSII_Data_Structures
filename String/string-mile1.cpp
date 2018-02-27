//implement all the functions
//Daniel Loftus
//10/4/17

#include "string.hpp"

String::String (){
	str[0] = '\0';
}

String::String (char letter){
	str[0] = letter;
	str[1] = '\0';
}

String::String (const char ch[]){
	int i = 0;
	while (ch[i] != '\0'){
		str[i] = ch[i];
		i++;
	}
	str[i] = '\0';
}

int String::length ()const{
	int length = 0;
	for(int i = 0; (i <= STRING_SIZE - 1) && (str[i] != '\0'); i++){
			++length;
	}
	return length;
}

int String::capacity ()const{
	return STRING_SIZE - 1;
}

String String::operator+ (const String& s)const {
	int total = length();
	int i = 0;
	String result (str);
	while (s.str[i] != '\0'){
		if ((total + i) >= (capacity()))
			break;
		result.str[total + i] = s.str[i];
		++i;
	}
	result.str[total + i] = '\0';
	return result;
}

String& String::operator+= (String s){
	int begin = length();
	int i = 0;
	while (s.str[i] != '\0'){
		if ((begin = i) >= (capacity())){
			break;
			str[begin + i] = s.str[i];
			++i;
		}
	}
	str[begin + i] = '\0';
	return *this;
}

char& String::operator[] (int i){
	return str[i];
}

char String::operator[] (int i)const{
	return str[i];
}

bool String::operator== (const String& s)const{
	int i = 0;
	while ((str[i] != '\0') && (str[i] == s.str[i])){
		++i;
	}
	return str[i] == s.str[i];
}

bool String::operator< (const String& s)const {
	int i = 0;
	while ((str[i] != '\0') && (s.str[i] != '\0') && (str[i] == s.str[i])){
	++i;
	}
	return str[i] < s.str[i];
}

String String::substr (int start, int end)const{
	String result;
	int i;
	for (i = start; i <= end; ++i){
		result.str[i - start] = str[i];
	}
	result.str[i - start] = 0;
	return result;
}

int String::findch (int position, char ch)const{
	if (position < 0) position = 0;
	if (position > length() - 1) return -1;

	int i = position;
	while (str[i] != 0){
		if (ch == str[i]) return i;
			++i;
	}
	return -1;
}

int String::findstr (int position, const String& s)const{
	if (position < 0) position = 0;
	if (position > length() - s.length()) return -1;
	int length = s.length();
	int i = position;
	while(str[i] != 0){
		if(substr(i, i + length - 1) == s) return i;
		++i;
	}
	return -1;
}

std::istream& operator>> (std::istream& in, String& s){
	in >> s.str;
	return in;
}

std::ostream& operator<< (std::ostream& out,const String& s){
	out << s.str;
	return out;
}

String operator+ (char lhs, const String& rhs){
	return String(lhs) + rhs;
}

String operator+ (const char lhs[], const String& rhs){
	return String(lhs) + rhs;
}

bool operator== (char lhs, const String& rhs){
	return String(lhs) == rhs;
}

bool operator== (const char lhs[], const String& rhs){
	return String(lhs) == rhs;
}

bool operator< (char lhs, const String& rhs){
	return String(lhs) < rhs;
}

bool operator< (const char lhs[], const String& rhs){
	return String(lhs) < rhs;
}

bool operator<= (const String& lhs, const String& rhs){
	return String(lhs) <= rhs;
}

bool operator>= (const String& lhs, const String& rhs){
	return !(lhs < rhs);
}

bool operator> (const String& lhs, const String& rhs){
	return (lhs < rhs);
}
bool operator!= (const char lhs[], const String& rhs){
	return !(lhs == rhs);
}












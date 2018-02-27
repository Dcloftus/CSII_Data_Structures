//implement all the functions
//Daniel Loftus
//10/4/17

#include "string.hpp"

String::String (){
<<<<<<< .mine
	str = new char('\0');
	stringSize = 1;
||||||| .r4732
	str = new char('\0');
	stringSize = 0;
=======
  str = new char('\0');
  stringSize = 1;
>>>>>>> .r5504
}

String::String (char letter){
  str = new char[2];
  str[0] = letter;
  str[1] = '\0';
  stringSize = 2;
	stringSize = 2;
}
<<<<<<< .mine
String::String (int n){
	stringSize = n + 1;
	str = new char[stringSize];
	str[0] = '\0';
}
||||||| .r4732
=======
String::String (int num){
  stringSize = num + 1;
  str = new char[stringSize];
  str[0] = '\0';
}
>>>>>>> .r5504

String::String (const char ch[]){
  int length = 0;
  int i = 0;
  while (ch[i] != '\0'){
    ++length;
    ++i;
  }
  str = new char[length];
  int j = 0;
  while (ch[j] != '\0'){
    str[j] = ch[j];
    ++j;
  }
  str[j] = '\0';
  stringSize = j + 1;
	stringSize = j + 1;
}
<<<<<<< .mine

String::String (int n, const char* ch){
	stringSize = n + 1;
	str = new char[stringSize];
	int i = 0;
	while (ch[i] != '\0'){
		str[i] = ch[i];
		++i;
	}
	str[i] = '\0';
}

String::String (const String& rhs){
	str = new char [rhs.length()];
	int i = 0;
	while (rhs[i] != '\0'){
		str[i] = rhs[i];
		++i;
	}
	str[i] = '\0';
||||||| .r4732
String::String (const String& rhs){
	str = new char [rhs.length()];
	int i = 0;
	while (rhs[i] != '\0'){
		str[i] = rhs[i];
		++i;
	}
	str[i] = '\0';
=======

String::String (int num, const char* ch){
  stringSize = num + 1;
  str = new char[stringSize];
  int i = 0;
  while (ch[i] != '\0'){
    str[i] = ch[i];
    ++i;
  }
  str[i] = '\0';
>>>>>>> .r5504
	stringSize = i + 1;
}

String::String (const String& s){
  str = new char [s.length()];
  int i = 0;
  while (s[i] != '\0'){
    str[i] = s[i];
    ++i;
  }
  str[i] = '\0';
  stringSize = i + 1;
}

String::~String(){
  delete[] str;
}

int String::length ()const{
  int length = 0;
  int i = 0;
  while (str[i] != '\0'){
    ++length;
    ++i;
  }
  return length;
}

int String::capacity ()const{
<<<<<<< .mine
	return stringSize - 1;
}

void String::swap (String& rhs){
	char *temp = str;
	str = rhs.str;
	rhs.str = temp;
}

String& String::operator= (String s){
	swap(s);
	return  *this;
}

void String::resetCapacity (int n){
	char *temp = new char[n];
	for (int i = 0; i < length(); ++i){
		temp[i] = str[i];
	}
	delete[] str;
	str = temp;
	stringSize = n;
||||||| .r4732
	int cap = 0;
	int i = 0;
	while (str[i] != '\0'){
		++cap;
		++i;
	}
	return cap + 1;
=======
  return stringSize - 1;
>>>>>>> .r5504
}

<<<<<<< .mine
||||||| .r4732
void String::swap (String& s){
	
}
=======
void String::swap (String& s){
  char *temp = str;
  str = s.str;
  s.str = temp;

  int tSize = stringSize;
  stringSize = s.stringSize;
  s.stringSize = tSize;
}
>>>>>>> .r5504

String& String::operator= (String s){
  swap(s);
  return  *this;
}

void String::resetCapacity (int num){
  char *temp = new char[num];
  for (int i = 0; i < length(); ++i){
    temp[i] = str[i];
  }
  delete[] str;
  str = temp;
  stringSize = num;
}

String String::operator+ (const String& s)const {
<<<<<<< .mine
	String result (str);
	if ((s.length() + length() + 1) > capacity()){
		result.resetCapacity(s.length() + length() + 1);
	}
	int begin = length();
	int i = 0;
	while (s.str[i] != '\0'){
		result.str[begin + i] = s.str[i];
		++i;
	}
	result.str[begin +i] = '\0';
	result.stringSize = begin + i + 1;
	return result;
||||||| .r4732
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
=======
  String result (str);
  if ((s.length() + length() + 1) > capacity()){
    result.resetCapacity(s.length() + length() + 1);
  }
  int begin = length();
  int i = 0;
  while (s.str[i] != '\0'){
    result.str[begin + i] = s.str[i];
    ++i;
  }
  result.str[begin +i] = '\0';
  result.stringSize = begin + i + 1;
  return result;
>>>>>>> .r5504
}

String& String::operator+= (String s){
<<<<<<< .mine
	if((s.length() + length() + 1) > capacity()){
		resetCapacity(s.length() + length() + 1);
	}
	int begin = length();
	int i = 0;
	while(s.str[i] != '\0'){
		str[begin + i] = s.str[i];
		++i;
	}
	str[begin + i] = '\0';
	return *this;	
||||||| .r4732
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
=======
  if((s.length() + length() + 1) > capacity()){
    resetCapacity(s.length() + length() + 1);
  }
  int begin = length();
  int i = 0;
  while(s.str[i] != '\0'){
    str[begin + i] = s.str[i];
    ++i;
  }
  str[begin + i] = '\0';
  return *this;
>>>>>>> .r5504
}

char& String::operator[] (int num){
  return str[num];
}

char String::operator[] (int num)const{
  return str[num];
}

bool String::operator== (const String& s)const{
  int i = 0;
  while ((str[i] != '\0') && (str[i] == s.str[i])){
    ++i;
  }
  return str[i] == s[i];
}

bool String::operator< (const String& s)const {
  int i = 0;
  while ((str[i] != '\0') && (s[i] != '\0') && (str[i] == s[i])){
      ++i;
    }
    return str[i] < s[i];
}
String String::substr (int begin, int end)const{
  if (begin < 0){
    begin = 0;
  }
  if (end > capacity()){
    end = capacity();
  }

  int Size = 0;
  if (begin == end)
    Size = 2;
  else
    Size = end - begin + 1;

  char result[Size];
  int i;
  for (i = begin; i <= end; ++i){
    result[i - begin] = str[i];
  }
  result [i - begin] = '\0';
  String temp(result);
  return temp;
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
  return !(rhs < lhs);
}

bool operator>= (const String& lhs, const String& rhs){
  return (lhs < rhs);
}

bool operator> (const String& lhs, const String& rhs){
  return (lhs < rhs);
}
bool operator!= (const char lhs[], const String& rhs){
  return !(lhs == rhs);
}


/**
 * Daniel Loftus
 * Big Int
 * CS 23001
 */

#include "bigint.hpp"

void bigint::initialize (){
  for (int i = 0; i < maxSize; ++i){
    arr[i] = 0;
  }
}

bigint::bigint (){
  initialize();
}

bigint::bigint (int myInt){
  initialize();
    
  int i = 0;
  while (myInt){
    arr[i++] = myInt % 10;
    myInt /= 10;
  }
}

/*int bigint::length (){           //might need later
  int length = 0;                 //not finished
  while (a[length] != 0){
    ++length;
  }
  return length;
}
*/

bigint::bigint (const char a[]){
  initialize();
  int length = 0, x = 0;
  do {
    ++length;
  }while(a[length] != 0);
  for (int i = length - 1; i >= 0; i--, x++){
    arr[x] = int(a[i]) - int('0');
  }
}

void bigint::debugPrint (std::ostream&) const{
  int realSize = maxSize - 1;
  for (int i = 0; i < realSize; ++i){
    std::cout << "|" << arr[i] << "|";
  }
  std::cout << std::endl;
}


bool operator== (const bigint& rhs, const bigint& lhs){
  for (int i = 0; i < maxSize; i++){
    if (rhs.arr[i] != lhs.arr[i]){
      return false;
    }
  }
  return true;
}

std::ostream& operator<< (std::ostream& output, bigint rhs){
  rhs.debugPrint(output);
  return output;
}

std::istream& operator>> (std::istream& input, bigint& rhs){
  char temp[maxSize];
  char in;
  for (int i = 0; i < maxSize; i++){
    temp[i] = 0;
  }
  input >> in;
  int i = 0;
  while (in != ';' && i < maxSize){
    temp[i] = in;
    input >> in;
    ++i;
  }
  rhs = bigint(temp);
  return input;
}

bigint bigint::operator+ (const bigint& rhs) const{
  int temp = 0;
  int extra = 0;
  for (int i = 0; i < maxSize; ++i){
    extra = arr[i] + rhs.arr[i] + extra;
    temp = extra % 10;
    extra /= 10;
  }
  return temp;
}

int bigint::operator[] (int sub) const{
  if ((sub < 0) || (sub >= maxSize)){
    return 0;
  }
  return arr[sub];
}

bigint bigint::timesDigit (int x) const{
  bigint temp;
  int extra = 0;
  int result = 0;
  for (int i = 0; i < maxSize; i++){
    extra = arr[i] * x + extra;
    result = extra % 10;
    extra /= 10;
    temp.arr[i] = result;
  }
  return temp;
}

bigint bigint::times10 (int x) const{
  bigint temp;
  for (int i = maxSize - 1 - x; i >= 0; i--){
    temp.arr[i + x] = arr[i];
  }
  for (int j = 0; j < x; j++){
    temp.arr[j] = 0;
  }
  return temp;
}

bigint bigint::operator* (bigint rhs){
  bigint result = 0;
  bigint temp;
  for (int i = 0; i < maxSize - 1; i++){
    temp = timesDigit(rhs.arr[i]);
    result = result + temp.times10(i);
  }
  return result;
}



















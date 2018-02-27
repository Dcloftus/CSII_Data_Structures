/**
 * Daniel Loftus
 * Big Int
 * CS 23001
 */

#ifndef CS2_BIGINT_HPP
#define CS2_BIGINT_HPP

#include <iostream>
#include <fstream>
#include <cassert>

const int maxSize = 512;

class bigint{
public:

  int arr[maxSize];

  bigint             ();
  bigint             (int);
  bigint             (const char[]);
  void initialize    ();
  void debugPrint    (std::ostream&) const;
  // int length      ();                      //might need later, not finished
  bool operator==    (const bigint&);
  int operator[]     (int sub) const;
  bigint operator+   (const bigint&) const;
  bigint timesDigit  (int) const;
  bigint times10     (int) const;
  bigint operator*   (bigint);

  friend std::ostream& operator<<(std::ostream&, bigint);
  friend std::istream& operator>>(std::istream&, bigint&);
private:
};


#endif

/*
Data Types 
int min 2 and max 4 bytes eg: intmyVar; ( myVar is a variable of int)

The size of float (single precision float data type) is 4 bytes. And the size of double (double precision float data type) is 8 bytes.
eg: float salary;
double price;

char is used for declaring character type
eg: char test = 'h';

void is an incomplete type. It means "nothing" or "no type".

short and long */
#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}
/*
signed - allows for storage of both positive and negative numbers
unsigned - allows for storage of only positive numbers

// valid codes
unsigned int x = 35;
int y = -35;  // signed int
int z = 36;  // signed int

// invalid code: unsigned int cannot hold negative integers
unsigned int num = -35;


*/
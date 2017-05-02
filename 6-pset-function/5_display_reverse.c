/*
  Write a program to read 1 to 10 number into
  an array and print in reverse order using function.
*/

#include <stdio.h>

// Prototype declaration
int read();
int reverse();
int n = 0, nums[10];

int main(void) {
  read();
  n = 9;
  reverse();
  return 0;
}

// Read a number into an array recursively.
int read() {

  // Terminate 
  if (n > 9)
    return 0;

  // Set array index value
  nums[n] = n + 1;

  // Increment
  n++;

  // Recursion
  read();
}

// Display the numbers in array reversely.
int reverse() {
  
  // Terminate 
  if (n < 0) 
    return 0;
  printf("%d\t", nums[n]);
  n--;

  // Recursion
  reverse();
}
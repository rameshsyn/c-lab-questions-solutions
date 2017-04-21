/*
  Write a program to print the following
  series using for loop. 
  1,5,9,13,... up to 10 terms.
*/

#include <stdio.h>

int main(void) {
  int n = 1;
  for(int i = 0; i < 10; i++) {
    printf("%d \t", n);
    n += 4;
  }
  return 0;
}
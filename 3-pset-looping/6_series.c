/*
  Write a program to display the series:
  10, 9, 8, 7, 6, up to 1 using do while loop.
*/

#include <stdio.h>

int main(void) {
  int n = 10;
  do {
    printf("%d \t", n);
    n--;
  } while(n >= 1);
  
  return 0;
}
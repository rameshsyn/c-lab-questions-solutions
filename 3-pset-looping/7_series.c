/*
  Write a program to display the series:
  1, 6, 11, 16, ..... 101 using while loop.
*/

#include <stdio.h>

int main(void) {
  int n = 1;
  while(n <= 101) {
    printf("%d \t", n);
    n += 5;
  }
  return 0;
}
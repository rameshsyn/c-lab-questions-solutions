/*
  Write a program to print a ASCII
  character for ASCII code 50 to 100.
*/

#include <stdio.h>

int main(void) {
  int i = 50;
  printf("Corresponding ASCII character from number 50 to 100\n");
  for(i; i <= 100; i++) {
    printf("%d is %C \n", i , i);
  }
  return 0;
}
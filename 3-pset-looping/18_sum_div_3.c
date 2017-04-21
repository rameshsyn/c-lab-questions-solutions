/*
  Write a program to find the sum of numbers
  from 1 to 111 which are exactly divisible
  by three.
*/

#include <stdio.h>

int main(void) {
  printf("Numbers exactly divisible by 3\n");
  for(int i = 1; i <= 111; i++) {
    if(i % 3 == 0)
      printf("%d \t", i);
  }
  return 0;
}
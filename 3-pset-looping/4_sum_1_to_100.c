/*
  Write a program to calculate and display the
  sum of numbers from 1 to 100 using for loop.
*/

#include <stdio.h>

int main(void) {
  int sum = 0;
  for(int i = 1; i <= 100; i++) {
    sum += i;
  }
  printf("The sum of numbers from 1 to 100 is %d", sum);
  return 0;
}
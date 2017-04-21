/*
  Write a program to display numbers from 
  1 to 100 using while loop.
*/

#include <stdio.h>

int main(void) {
  int num = 1;
  printf("1 to 100 numbers\n");
  while(num <= 100) {
    printf("%d \t", num);
    num++;
  }
}
/*
  Write a program to print prime numbers
  from 1 to 50.
*/

#include <stdio.h>

int main(void) {
  int count;
  printf("Prime numbers from 1 to 50\n");
  for(int i = 1; i <= 50; i++) {
    count = 0;
    for(int j = 1; j <= i; j++) {
      if(i % j == 0) 
        count++;
    }
    if(count == 2) 
      printf("%d \t", i);
  }
  return 0;
}
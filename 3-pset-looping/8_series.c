/*
  Write a program to display the series:
  1, 8, 27, up to 10th term using for loop.
*/

#include <stdio.h>

int main(void){
  for(int i = 1; i <= 10; i++) {
    printf("%d \t", i * i * i);
  }
  return 0;
}
/*
  Write a program to check whether the entered 
  number is positive or negative.
*/

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter any number to check whether it is positive or negative: ");
  scanf("%d", &n);
  if(n > 0)
    printf("\nThe number is positive");
  else
    printf("\nThe number is negative");
  return 0;
}
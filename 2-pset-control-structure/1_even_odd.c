/*
  Write a program to check whether the
  entered number is even or odd.
*/

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter any number to check whether it\'s even or odd: ");
  scanf("%d", &n);
  if(n % 2 == 0) 
    printf("\nThe given number %d is even", n);
  else
    printf("\nThe given number %d is odd", n);
  return 0;
}
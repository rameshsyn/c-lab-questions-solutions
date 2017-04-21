/*
  Write a program to display factorial of a 
  given number using while and for loop.
*/

#include <stdio.h>

int main(void) {
  int fact = 1, n;
  printf("Enter any number: ");
  scanf("%d", &n);
  for(int i = n; i >= 1; i--) {
    fact *= i;
  }
  printf("The factorial of %d is %d", n, fact);
  return 0;
}
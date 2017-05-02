/*
  Write a program to print factorial of a given
  number using recursive function.
*/

#include <stdio.h>

int fact(int);

int main(void) {
  int n;
  printf("Enter a number to find a factorial: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d", n, fact(n));
  return 0;
}

int fact(int n) {
  if(n <= 0) 
    return 1;
  return n * fact(n - 1);
}
/*
  Write a program to read a number and find its square
  root.
*/

#include <stdio.h>

int main() {
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  printf("\nSquare root of %d is %d", n, n * n);
  return 0;
}
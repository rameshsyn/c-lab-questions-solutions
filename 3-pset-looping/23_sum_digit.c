/*
  Write a program to sum the digits of any
  integer given by the user.
*/

#include <stdio.h>

int main(void) {
  int n, sum = 0, num, d;
  printf("Enter any integer to find sum it\'s digits: ");
  scanf("%d", &n);
  num = n;
  while(n != 0) {
    d = n % 10;
    sum += d;
    n = n / 10;
  }
  printf("\nThe sum of %d\'s digits is %d", num, sum);
  return 0;
}

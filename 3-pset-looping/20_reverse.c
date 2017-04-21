/*
  Write a program to reverse of an integer number.
*/

#include <stdio.h>

int main(void) {
  int n, rev = 0, d;
  printf("Enter any integer to find it\'s reverse: ");
  scanf("%d", &n);
  while(n != 0) {
    d = n % 10;
    rev = rev * 10 + d;
    n = n / 10;
  }
  printf("\nThe reverse of is %d", rev);
  return 0;
}
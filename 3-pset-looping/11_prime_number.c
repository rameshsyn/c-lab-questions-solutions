/*
  Write a program to input an integer number and
  check whether it is a prime number or not.
*/

#include <stdio.h>

int main(void) {
  int n, count = 0;
  printf("Enter any number to test whether it is prime or not: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    if(n % i == 0)
      count++;
  }
  if(count == 2) {
    printf("\n%d is a prime number", n);
  } else {
    printf("\n%d is not a prime number", n);
  }
  return 0;
}  
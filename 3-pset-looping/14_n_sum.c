/*
  Write a program to find the sum of first
  n even natural numbers, where n is entered
  by the user.
*/

#include <stdio.h>

int main(void) {
  int sum = 0, n, num = 2;
  printf("Enter how many even natural numbers you want sum up: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    sum += num;
    num += 2;
  }
  printf("\nThe sum of given n even natural numbers is %d", sum);
  return 0;
}
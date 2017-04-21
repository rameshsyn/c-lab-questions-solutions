/*
  Write a program to find the sum of the squares
  of first n natural numbers, where n is
  entered by the user.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int n, sum = 0;
  printf("Enter how many natural numbers you want to sum up: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    sum += pow(i, 2);
  }
  printf("The total sum is %d", sum);
  return 0;
}
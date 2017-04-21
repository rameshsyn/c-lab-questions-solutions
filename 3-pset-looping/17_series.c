/*
  Write a program to find the sum of the first n terms
  of the following series, where n is entered 
  by the user: 
  1 + 1/2 + 1/3 + 1/4 + .... up to n terms
*/

#include <stdio.h>

int main(void) {
  int n; 
  float sum = 0.0; 
  printf("Enter the no of terms: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    sum += (1.0/i);
  }
  printf("The sum of series is %.2f", sum);
  return 0;
}
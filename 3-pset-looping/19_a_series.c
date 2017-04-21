/*
  Find the sum of the following series:
  0.9 + 0.99 + 0.999 + ... n terms
*/

#include <stdio.h>

int main(void) {
  int n;
  float sum = 0.0, x = 0.9;
  printf("Enter the number of terms you want to sum up: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    sum += x;
    x = 0.9 + (x * 0.1);
  }
  printf("\nThe sum of the series is %.2f", sum);
  return 0;
}
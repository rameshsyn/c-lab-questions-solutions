/*
  Find the sum of the following series:
  (2 * 3)/5 + (4 * 5)/7 + (6 * 7)/9 + ... n terms
*/

#include <stdio.h>

int main(void) {
  int n, num = 2; 
  float sum = 0.0;
  printf("Enter the number of terms you want to sum up: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    // Explicit type casting.
    sum += (float)(num * (num + 1)) / (num + 3);
    num += 2;
  }
  printf("\nThe sum of the series is %.2f", sum);
  return 0;
}
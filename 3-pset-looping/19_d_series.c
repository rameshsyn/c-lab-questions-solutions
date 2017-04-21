/*
  Find the sum of the following series:
  1 * 2 + 3 * 4 + 5 * 6 + 7 * 8 ... n terms
*/

#include <stdio.h>

int main(void) {
  int n, sum = 0, num = 1;
  printf("Enter the number of terms you want to sum up: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    sum += (num * (num + 1));
    num += 2;
  }
  printf("\nThe sum of the series is %d", sum);
  return 0;
}
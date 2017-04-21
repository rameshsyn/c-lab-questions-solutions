/*
  Find the sum of the following series:
  1 + 3 + 7 + 15 + ... n terms
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int n, num = 1, sum = 0;
  printf("Enter the number of terms you want to sum up: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    sum += num;
    num += pow(2, i);
  }
  printf("\nThe sum of a series is %d", sum);
  return 0;
}
/*
  Write a program to calculate y raised to power x using pow() function.
*/
// Don't forget to link this program with math library
#include <stdio.h>
#include <math.h>

int main() {
  int x, y;
  long int result;
  printf("Enter a base number: ");
  scanf("%d", &y);
  printf("\nEnter a power: ");
  scanf("%d", &x);
  result = pow(y, x);
  printf("\n%d raised to power %d is %ld \n", y, x, result);
  return 0;
}
/*
  Write a program to check whether the 
  given three digit integer is Armstrong or not.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int n, arm = 0, num, d;
  printf("Enter three digit integer to check whether it is armstrong or not: ");
  scanf("%d", &n);
  num = n;
  while(n != 0) {
    d = n % 10;
    arm = arm + pow(d, 3);
    n = n / 10;
  }
  if(num == arm)
    printf("\nThe given number %d is armstrong", num);
  else
    printf("\nThe given number %d is not an armstrong", num);
  return 0;
}

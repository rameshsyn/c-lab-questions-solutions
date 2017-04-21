/*
  Write a program that checks whether
  the number entered by the user is exactly
  divisible by 5 but not by 11.
*/

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the number to check whether is divisible by 5 or not: ");
  scanf("%d", &n);
  if((n % 5 == 0) && (n % 11 != 0))
    printf("\nThe number is exactly divisible by 5 but not by 11");
  else 
    printf("\nThe number is not exactly divisible by 5");
  return 0;
}
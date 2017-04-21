/*
  Write a program to count the number
  of digits in an integer number entered 
  by the user.
*/

#include <stdio.h>

int main(void) {
  int n, count = 0, num;
  printf("Enter any integer to count it\'s digits: ");
  scanf("%d", &n);
  num = n;
  while(n != 0) {
    n = n / 10;
    count++;
  }
  printf("\nThe number of digits in %d is %d", num, count);
  return 0;
}

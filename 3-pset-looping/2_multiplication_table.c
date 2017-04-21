/*
  Write a program to display the multiplication table
  of given number entered by the user using while loop.
*/

#include <stdio.h>

int main(void) {
  int num, n = 1;
  printf("Enter any number: ");
  scanf("%d", &num);
  while(n <= 10) {
    printf("\n%d * %d = %d", num, n, num * n);
    n++;
  }
  return 0;
}
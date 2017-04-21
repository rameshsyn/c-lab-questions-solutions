/*
  Write a program to check whether the 
  given number is palindrome or not
*/

#include <stdio.h>

int main(void) {
  int n, rev = 0, d, num;
  printf("Enter any integer to check whether it is palindrome or not: ");
  scanf("%d", &n);
  num = n;
  while(n != 0) {
    d = n % 10;
    rev = rev * 10 + d;
    n = n / 10;
  }
  if(num == rev)
    printf("\nThe number %d is palindrome", num);
  else
    printf("\nThe number %d is not a palindrome", num);
  return 0;
}
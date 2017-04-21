/*
  Write a program to display Fibonacci series up to n terms.
*/

#include <stdio.h>

int main(void) {
  int n, a = 1, b = 1, c;
  printf("Enter the number of terms you want to display Fibonacci series: ");
  scanf("%d", &n);
  printf("\n\nFibonacci Series\n");
  for(int i = 0; i < n; i++) {
    printf("%d \t", a);
    c = a + b;
    a = b;
    b = c;
  }
  return 0;
}
/*
  Write a function to add, subtract,
  multiply and divide two numbers.
*/

#include <stdio.h>

void do_arithemetic(int, int);
int main(void) {
  int a, b;
  printf("Enter any two numbers to do arithemetic calculation: ");
  scanf("%d %d", &a, &b);
  do_arithemetic(a, b);
  return 0;
}

void do_arithemetic(int x, int y) {
  int a, s, m;
  float d;
  a = x + y;
  s = x - y;
  m = x * y;
  d = (float) x / y;
  printf("\nThe arithemetic calculation of %d and %d \n Add: %d, \n Subtract: %d, \n Multiply: %d, \n Divide: %.2f", x, y, a, s, m, d);
}
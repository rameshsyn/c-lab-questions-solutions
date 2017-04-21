/*
  Write a program to read temperature in Celsius and convert
  it into Fahrenheit.
*/

#include <stdio.h>

int main(void) {
  int c;
  float f;
  printf("Enter a temperature in Celsius: ");
  scanf("%d", &c);
  f = 1.8 * (c + 32);
  printf("\nConverted Fahrenheit is: %.2f", f);
  return 0;
}
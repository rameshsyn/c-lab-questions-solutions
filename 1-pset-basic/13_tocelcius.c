/*
  Write a program to read temperature in Fahrenheit and
  convert it into Celsius.
*/

#include <stdio.h>

int main(void) {
  int f;
  float c;
  printf("Enter a temperature in Fahrenheit: ");
  scanf("%d", &f);
  c = (5.0/9.0) * (f-32);
  printf("\nConverted Celsius temperature is: %.2f", c);
  return 0;
}
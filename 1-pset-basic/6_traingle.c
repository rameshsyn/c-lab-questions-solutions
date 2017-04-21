/*
  Write a program to read the base and altitude of a traingle
  and display the area of traingle.
*/

#include <stdio.h>

int main() {
  int b,h,area;
  printf("Enter a base and altitude of a traingle: ");
  printf("\nBase: ");
  scanf("%d", &b);
  printf("Altitude: ");
  scanf("%d", &h);
  area = 0.5 * b * h;
  printf("\nArea of a traingle is: %d", area);
  return 0;
}
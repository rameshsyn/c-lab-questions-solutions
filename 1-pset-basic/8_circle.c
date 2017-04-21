/*
  Write a program to read radius of a circle and find an area 
  circuference.
*/

#include <stdio.h>

int main() {
  int r,area,circum;
  printf("Enter a radius of a circle: ");
  scanf("%d", &r);
  area = (22/7) * r * r;
  circum = 2 * (22/7) * r;
  printf("Area: %d and Circumference: %d", area, circum);
  return 0;
}
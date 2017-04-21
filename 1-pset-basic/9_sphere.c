/*
  Write a program to read a radius of a sphere and compute
  its surface area and volume.
*/

#include <stdio.h>

int main() {
  int r, area, volume;
  printf("Enter a radius of a sphere: ");
  scanf("%d", &r);
  area = 4 * (22/7) * r * r;
  volume = (4/3) * (22/7) * r * r * r;
  printf("\n Area: %d and Volume: %d", area, volume);
  return 0;
}
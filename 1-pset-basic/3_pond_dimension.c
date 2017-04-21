/* 
  Write a program to read the length, breadth and height
  of a pond and calculate its volume.
*/

#include <stdio.h>
int main() {
  int l,b,h,volume;
  printf("Enter the length, breadth and height of a pond respectively: \n");
  printf("Length: \t");
  scanf("%d", &l);
  printf("Breadth: \t");
  scanf("%d", &b);
  printf("Height: \t");
  scanf("%d", &h);
  volume = l * b * h;
  printf("The volume of a pond is: %d \n", volume);
  return 0;
}
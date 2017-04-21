/* 
  Write a program to read the length and breadth of a rectangle.
  Find and display the area and perimeter of rectangle. 
*/
#include <stdio.h>

int main() {
  int l,b,area,perimeter;
  printf("Enter a length and breadth of a rectangle: \n");
  printf("Length: ");
  scanf("%d", &l);
  printf("Breadth: ");
  scanf("%d", &b);
  area = l * b;
  perimeter = 2 * (l+b);
  printf("\nRectangle Area: %d and perimeter: %d \n", area, perimeter);
}
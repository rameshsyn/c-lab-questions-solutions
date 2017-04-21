/*
  Write a program to read the length and breadth
  of a room and calculate the area of the
  room and display the message as:
  Auditorium  area>2500
  Hall        area >= 500 and area <= 2500
  Big Room    area > 150 and area < 500
  Small Room  area <= 150
*/

#include <stdio.h>

int main(void) {
  int l, b, area;
  printf("Enter the value of breadth and length of a room respectively: ");
  scanf("%d %d", &l, &b);
  area = l * b;
  if(area > 2500)
    printf("\n Auditorium");
  else if(area >= 500 && area <= 2500)
    printf("\n Hall");
  else if(area > 150 && area < 500)
    printf("\n Big Room");
  else
    printf("\n Small Room");
  return 0;
}
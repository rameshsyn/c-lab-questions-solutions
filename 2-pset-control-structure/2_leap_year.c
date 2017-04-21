/*
  Write a program to check whether the year (4 digit number)
  entered by the user is a leap year or not.
*/

#include <stdio.h>

int main(void) {
  int year;
  printf("Enter any year to check whether it is leap year or not: ");
  scanf("%d", &year);
  if(year % 4 == 0)
    printf("\nThe given year is leap year");
  else
    printf("\nThe given year is not a leap year");
  return 0;
}
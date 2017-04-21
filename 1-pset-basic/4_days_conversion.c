/*
  Write a program to read a value of days and
  convert it into year, month and day.
*/

#include <stdio.h>
int main() {
  int day, year, month, remDays;
  printf("Enter a number of days: ");
  scanf("%d", &day);

  // Calculate year
  year = day / 365;

  // Calculate remaining days
  remDays = day % 365;

  // Calculate month
  month = remDays / 30;

  // Calculate remaining days
  day = remDays % 30;
  
  printf("\n Year: %d, Month: %d, Day: %d", year,month,day);
  return 0;
}
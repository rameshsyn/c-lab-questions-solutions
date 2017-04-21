/*
  Write a program to read the age in year, month and day format
  and display the age in days only.
*/

#include <stdio.h>
int main() {
  int year, month, day, totDays;
  printf("Enter year, month and day \n");
  printf("Year: ");
  scanf("%d", &year);
  printf("Month: ");
  scanf("%d", &month);
  printf("Day: ");
  scanf("%d", &day);
  totDays = (year * 365) + (month * 30) + day;
  printf("\nYour age in days: %d", totDays);
  return 0;
}
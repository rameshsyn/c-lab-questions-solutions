/*
  A company pays its employee on hourly basis.
  If an employee works for 8 hours he gets Rs. 100/hour
  and Rs. 120/hour for additional hours. Write
  a program to read working hours of an employee and
  calculate the total salary.
*/

#include <stdio.h>

int main(void) {
  int hour, tot_salary;
  printf("Enter working hours of an employee: ");
  scanf("%d", &hour);
  if(hour <= 8)
    tot_salary = hour * 100;
  else
    tot_salary = 8 * 100 + (hour - 8) * 120;
  printf("\nThe total salary of an employee is %d", tot_salary);
  return 0;
}
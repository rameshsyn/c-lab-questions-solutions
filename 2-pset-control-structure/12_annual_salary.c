/*
  Write a program to read annual salary of 
  an employee and decide tax withheld as follows:
  salary        Tax
  up to 100000   0%
  up to 150000   15%
  above 150000   25%
*/

#include <stdio.h>

int main(void) {
  int salary, tax;
  printf("Enter your salary: ");
  scanf("%d", &salary);
  if(salary <= 100000)
    tax = salary * 0;
  else if(salary > 100000 && salary <= 150000)
    tax = (salary - 100000) * 0.15 + 100000 * 0;
  else
    tax = (salary - 150000) * 0.25 + (150000 - 100000) * 0.15 + 100000 * 0;
  printf("\nThe net salary is %d", salary - tax);
  return 0;
}
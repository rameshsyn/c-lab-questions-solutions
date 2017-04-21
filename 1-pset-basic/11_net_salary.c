/*
  Write a program to read salary of an employee and calculate
  Travelling Allowance (TA), Daily Allowance (DA) and Tax as TA
  is 10% of salary, DA is 12% of salary and Tax is 15% of salary.
  Finally calculate net salary.
*/
#include <stdio.h>

int main() {
  int TA, DA, tax, salary, netSalary;
  printf("Enter your salary amount : \t");
  scanf("%d", &salary);
  TA = 0.1 * salary;
  DA = 0.12 * salary;
  tax = 0.15 * salary;
  netSalary = salary + TA + DA - tax;
  printf("Your net salary is : %d \n", netSalary);
  return 0;
}
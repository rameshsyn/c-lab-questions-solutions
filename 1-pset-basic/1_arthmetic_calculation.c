/*
  Write a program to read the two numbers and display their sum,
  difference, product and quotient.
*/

#include <stdio.h>

int main() {
  int numb1, numb2, sum, diff, product, quotient;
  printf("Enter any number :  ");
  scanf("%d", &numb1);
  printf("\nEnter any number again: ");
  scanf("%d", &numb2);
  sum = numb1 + numb2;
  diff = numb1 - numb2;
  product = numb1 * numb2;
  quotient = numb1 / numb2;
  printf("\n ------------------------- ");
  printf("\n Sum: %d, \t Difference: %d, \n Product: %d, \t Quotient: %d ", sum, diff, product, quotient);
  return 0;
}
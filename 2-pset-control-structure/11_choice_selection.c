/*
  Write a program to read two numbers and display the following menu.
          MENU
    1. Summation
    2. Sum of squares
    3. Sum of cubes
    4. Product
    5. Exit
  And perform tasks as per user's choice.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
  int a, b, sum, sq_sum, cu_sum, product, choice;
  printf("Enter two numbers: \n");
  scanf("%d %d", &a, &b);
  printf("\n---------------- MENU -------------- ");
  printf("\n\t 1. Summation \n\t 2. Sum of squares \n\t 3. Sum of cubes \n\t 4. Product \n\t 5. Exit \n Your choice: ");
  scanf("%d", &choice);
  switch(choice) {
    case 1: 
      sum = a + b;
      printf("\nThe sum is %d", sum);
      break;
    case 2: 
      sq_sum = pow(a, 2) + pow(b, 2);
      printf("\nThe sum of squares is %d", sq_sum);
      break;
    case 3: 
      cu_sum = pow(a, 3) + pow(b, 3);
      printf("\nThe sum of cubes is %d", cu_sum);
      break;
    case 4: 
      product = a * b;
      printf("\nThe product is %d", product);
    case 5: 
      exit(0);
    default: 
      printf("\nWrong choice");
  }
}
/*
  Write a program to read the two numbers
  and display the largets number among the
  entered numbers.
*/

#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter any two to find largest among them: ");
  scanf("%d %d", &a, &b);
  if(a > b)
    printf("\n %d is larger than %d", a, b);
  else
    printf("\n %d is larger than %d", b, a);
  return 0;
}

/*
  Write a program to read the temperature of 
  seven days of a week and print the 
  average temperature of the week.
*/

#include <stdio.h>

int main(void) {
  int temps[7], sum = 0;
  printf("Enter the temperature of seven days of a week: \n");
  for(int i = 0; i < 7; i++) {
    scanf("%d", &temps[i]);
    sum += temps[i];
  }
  printf("\nThe average temperature is %d", sum / 7);
  return 0;
}
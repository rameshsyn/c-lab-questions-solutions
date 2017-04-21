/*
  Write a program to read the integer number
  from 1 to 7 and display the names of days based
  on the number entered by the user.
*/

#include <stdio.h>

int main(void) {
  int day;
  printf("Enter the day of a week: ");
  scanf("%d", &day);
  switch(day) {
    case 1: 
      printf("\nSunday");
      break;
    case 2:
      printf("\nMonday");
      break;
    case 3:
      printf("\nTuesday");
      break;
    case 4:
      printf("\nWednesday");
      break;
    case 5:
      printf("\nThrusday");
      break;
    case 6:
      printf("\nFriday");
      break;
    case 7:
      printf("\nSaturday");
      break;
    default:
      printf("\nWrong input");
  }
  return 0;
}
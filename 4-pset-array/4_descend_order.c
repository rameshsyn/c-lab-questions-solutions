/*
  Write a program to take marks of 15 students and print 
  them out in descending order of marks.
*/

#include <stdio.h>

int main(void) {
  int marks[15], temp;
  printf("Enter marks of 15 students: \n");
  for(int i = 0; i < 15; i++) {
    scanf("%d", &marks[i]);
  }
  for(int i = 0; i < (15 - 1); i++) {
    for(int j = 0; j < (15 - 1) - i; j++) {
      if(marks[j] < marks[j+1]) {
        temp = marks[j];
        marks[j] = marks[j+1];
        marks[j+1] = temp;
      }
    }
  }
  printf("\nSorted Marks: \n");
  for(int i = 0; i < 15; i++) {
    printf("%d \t", marks[i]);
  }

  return 0;
}
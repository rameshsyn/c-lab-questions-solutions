/*
  Write a program to read 15 students 
  marks and find the average marks.
*/

#include <stdio.h>

int main(void) {
  int marks[15], sum = 0;
  printf("Enter 15 students mark: ");
  for(int i = 0; i < 15; i++) {
    scanf("%d", &marks[i]);
    sum += marks[i];
  }
  printf("\nThe average mark is %d", sum / 15);
}
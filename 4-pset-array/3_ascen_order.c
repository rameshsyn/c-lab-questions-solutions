/*
  Write a program to accept an array of numbers
  to read 10 numbers and sort the numbers in 
  ascending order using Bubble Sort Algorithm.
*/

#include <stdio.h>

int main(void) {
  int nums[10], temp;
  printf("Enter any 10 numbers: \n");
  for(int i = 0; i < 10; i++) {
    scanf("%d", &nums[i]);
  }
  for(int i = 0; i < (10 - 1); i++) {
    for(int j = 0; j < (10 - 1) - i; j++) {
      if(nums[j] > nums[j+1]) {
        temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }
  printf("\nSorted Numbers: \n");
  for(int i = 0; i < 10; i++) {
    printf("%d \t", nums[i]);
  }

  return 0;
}
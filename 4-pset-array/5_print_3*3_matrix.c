/*
  Write a program to read and print a 
  3 * 3 matrix
*/

#include <stdio.h>

int main(void) {
  int mat[3][3], i, j;
  printf("Enter  3 * 3 matrix: \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\nMatrix you entered\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%d \t", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}
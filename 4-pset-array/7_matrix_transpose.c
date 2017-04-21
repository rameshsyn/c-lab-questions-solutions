/*
  Write a program to read a 3*3 matrix and 
  calculate and print the transpose of that matrix.
*/

#include <stdio.h>

int main(void) {
  int mat[3][3], tran[3][3], i, j;
  printf("Enter  3 * 3 matrix: \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      tran[i][j] = mat[j][i];
    }
  }

  printf("\nThe transpose of matrix: \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%d \t", tran[i][j]);
    }
    printf("\n");
  }
  return 0;
}
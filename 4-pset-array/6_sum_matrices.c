/*
  Write a program to read two 3 * 3 matrices
  and calculate and display the sum of those
  two matrices.
*/

#include <stdio.h>

int main(void) {
  int mat1[3][3], mat2[3][3], sum[3][3], i, j;
  printf("Enter  3 * 3 matrix: \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("\nEnter 3 * 3 matrix again \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  printf("\nThe sum of matrix: \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%d \t", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
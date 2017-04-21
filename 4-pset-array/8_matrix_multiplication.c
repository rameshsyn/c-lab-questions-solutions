/*
  Write a program to read two 3 * 3 matrices
  and calculate and display the multiplication
  of those two matrices.
*/

#include <stdio.h>

int main(void) {
  int mat1[3][3], mat2[3][3], mul[3][3], i, j, k;
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
      mul[i][j] = 0;
      for(k = 0; k < 3; k++) {
        mul[i][j] = mul[i][j] + (mat1[i][k] * mat2[k][j]);
      }
    }
  }

  printf("\nThe multiplication of matrix: \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%d \t", mul[i][j]);
    }
    printf("\n");
  }
  return 0;
}
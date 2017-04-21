/*
  Write a program to display the multiplication table
  of 1 to 10 using do while loop.
*/

#include <stdio.h>

int main(void) {
  int n;
  printf("Multiplication table from 1 to 10 \n\n");
  for(int i = 1; i <= 10; i++) {
    printf("============== Multiplication table of %d =============== \n", i);
    for(int j = 1; j <= 10; j++) {
      printf("%d * %d = %d\n", i, j, i * j);
    }
    printf("\n\n");
  }
  return 0;
}
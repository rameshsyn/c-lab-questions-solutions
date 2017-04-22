/*
  Write a program to display the multiplication table
  of 1 to 10 using do while loop.
*/

#include <stdio.h>

int main(void) {
  int n, j, i = 1;
  printf("Multiplication table from 1 to 10 \n\n");
  do {
    printf("============== Multiplication table of %d =============== \n", i);
    j = 1;
    do {
      printf("%d * %d = %d\n", i, j, i * j);
      j++;
    } while(j <= 10);
    i++;
    printf("\n\n");
  } while(i <= 10);
  return 0;
}
/*
  Write a program that inputs cost price
  and selling price sp and then determine
  whether there is profit or loss.
*/

#include <stdio.h>

int main(void) {
  int sp, cp;
  printf("Enter selling and cost price respectively: ");
  scanf("%d %d", &sp, &cp);
  if(sp > cp)
    printf("\nThere is a profit");
  else
    printf("\nThere is a loss");
  return 0;
}
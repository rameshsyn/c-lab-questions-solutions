/*
  Write a program to read principle (P), time (T)
  and rate (R) and find the simple interest.
*/

#include <stdio.h>

int main() {
  int p,t,r,SI;
  printf("Enter a principle, time and rate: \n");
  printf("Principle: ");
  scanf("%d", &p);
  printf("Time: ");
  scanf("%d", &t);
  printf("Rate: ");
  scanf("%d", &r);

  SI = (p * t * r) / 100;
  printf("Simple Interest: %d", SI);
  return 0;  
}
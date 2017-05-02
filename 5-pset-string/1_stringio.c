/*
  Write a program to read and print string using 
  gets() and puts() functions.
*/

#include <stdio.h>

int main(void) {
  char name[30];
  printf("Enter your name: ");
  gets(name);
  printf("\nHello: ");
  puts(name);
  return 0;
}
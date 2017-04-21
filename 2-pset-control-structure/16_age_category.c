/*
  Write a program to read age of a person in year
  and find out in which category the person belongs
  to: 
  category        Age
  Child            0 to 12
  Teenager         13 to 19
  Adult life       20 to 30
  Mature life      31 to 50
  Old age          Over 50
*/

#include <stdio.h>

int main(void) {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  if(age >= 0 && age <= 12)
    printf("\nYou are child.");
  else if(age >= 13 && age <= 19)
    printf("\nYou are Teenager");
  else if(age >= 20 && age <= 30)
    printf("\nYou are an Adult");
  else if(age >= 31 && age <= 50)
    printf("\nYou are Matured");
  else
    printf("\nYou are an Old");
  return 0;
}
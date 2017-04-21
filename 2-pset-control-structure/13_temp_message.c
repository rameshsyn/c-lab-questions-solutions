/*
  Write a program to read the temperature
  in Fahrenheit and display the message as
  follow:
  Nice day        temp > 60 and temp < 80
  Cold day        temp <= 60
  Hot Day         temp >= 80
*/

#include <stdio.h>

int main(void) {
  int temp;
  printf("Enter the value of temperature in Fahrenheit: ");
  scanf("%d", &temp);
  if(temp > 60 && temp < 80) 
    printf("\nNice Day");
  else if(temp <= 60)
    printf("\nCold Day");
  else
    printf("\nHot Day");
  return 0;
}
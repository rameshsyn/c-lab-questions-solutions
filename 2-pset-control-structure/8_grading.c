/*
  Write a program to read the marks of any
  five subjects for a student, calculate the
  total marks, check the result pass or fail 
  for the student also calculate the percentage
  and division of the student. Finally print the 
  Result pass or fail, percentage and division as 
  follow:
  Distinction      percentage >= 80
  First Division   percentage >= 60
  Second Division  percentage >= 45
  Third Division   percentage >= 35
*/

#include <stdio.h>

int main(void) {
  int e, n, f, ed, c, tot, per;
  printf("Enter the marks of subjects: English, Nepali, Foit, Education, C programming respectively\n");
  scanf("%d %d %d %d %d", &e, &n, &f, &ed, &c);
  if(e >= 35 && n >= 35 && f >= 35 && ed >= 35 && c >= 35) {
    tot = e + n + f + ed + c;
    per = tot / 5;
    printf("\nCongrats, You are passed in ");
    if(per >= 80)
      printf("Distinction with percentage %d", per);
    else if(per >= 60)
      printf("1st Division with percentage %d", per);
    else if(per >= 45)
      printf("2nd Division with percentage %d", per);
    else
      printf("3rd Division with percentage %d", per);
  } else
    printf("\nSorry, You are failed !");
  return 0;
}
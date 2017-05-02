/*
  WAP by using all string handling functions strcpy(),
  strrev(), strlen(), strcat(), strcmp().
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[] = "hello", str2[20];
  printf("Enter any two strings respectively: \n");
  // String copy
  strcpy(str2, str1);
  printf("str2: %s\n", str2);
  // String cancatnetation
  printf("string cancatnetation: %s\n", strcat(str1, str2));
  // String length
  printf("length of str3: %d\n", strlen(str1));
  // String compare
  if(strcmp(str1, str2) == 0) 
    printf("Both are same\n");
  else 
    printf("Not same\n");
  // String reverse
}

/*
  WAP to print whether an entered character
  is a vowel or not.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
  char let;
  printf("Enter any alphabet character to check vowel or not: ");
  scanf("%c", &let);
  let = tolower(let);
  switch(let) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': 
      printf("%c is vowel letter", let);
      break;
    default: 
      printf("\n%c is either consonent or wrong input", let);
  }
  return 0;
}
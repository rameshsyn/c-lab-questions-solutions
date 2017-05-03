/*
  WAP to check whether a given word is 
  palindrome or not.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototype declaration
char *strrev(char*);

int main(void) {
  char word[20], *pali;
  printf("Enter any word to check if it's a palindrome or not: ");
  scanf("%s", word);
  pali = strrev(word);
  if(strcmp(pali, word) == 0)
    printf("\nThe given word is palindrome");
  else
    printf("\nThe given word is not palindrome");
  return 0;
}


char *strrev(char *str) {
  // Check the size of passed string.
  int str_len = strlen(str);

  // Allocate memory to store reversed characters.
  char *reversed = malloc((sizeof(char) * str_len) + 1);

  // Iterate for the passed string length times
  for(int i = 0; i < str_len; i++) {

    // Store characters starting last index from passed
    // string to reversed first index....
    reversed[i] = str[(str_len - 1) - i];
  }
  // Change the value of passed string to reversed string memory
  str = reversed;
  // return passed string memory
  return str;
}
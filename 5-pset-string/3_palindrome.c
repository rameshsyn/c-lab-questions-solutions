/*
  WAP to check whether a given word is 
  palindrome or not.
*/

#include <stdio.h>
#include <string.h>

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

  // Declare array char to store reversed characters.
  char reversed[str_len + 1];

  // Iterate for the passed string length times
  for(int i = 0; i < str_len; i++) {

    // Store characters starting last index from passed
    // string to reversed first index....
    reversed[i] = str[(str_len - 1) - i];
  }
  // point to reversed string memory address
  str = reversed;
  return str;
}
#include <stdio.h>

int main () {
    int n, fact = 1, i;
    printf("Enter the number to get factorial of it: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--) 
        fact *= i;
    printf("\nThe factorial of %d is %d \n", n, fact);
    return 0;
}
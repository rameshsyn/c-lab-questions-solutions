/*
    Write a program to display the fibonacci series upto terms using recursive function.
*/

#include <stdio.h>


int fibo(int);

int main () {
    int n;
    printf("Enter the number of fibonacci terms you want: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        
        printf("%d \t", fibo(i));
    }
    
    return 0;
}

int fibo (int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return (fibo(n - 2) + fibo(n - 1));
    }
}
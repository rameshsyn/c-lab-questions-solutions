/*
    Write a program to read two floating point number and find the sum of it's squares and print it.
*/

#include <stdio.h>

int main () {
    float a, b, sum;
    printf("Enter any two floating numbers: ");
    scanf("%f %f", &a, &b);
    sum = (a * a) + (b * b);
    printf("The sum of squares of %.2f and %.2f is %.2f\n", a, b, sum);
    return 0;
}


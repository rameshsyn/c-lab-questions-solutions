#include <stdio.h>

void swap(int, int);
void main() {
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nValue before swap, a: %d, b: %d", a, b);
    swap(a, b);
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("\nValue after swap, a: %d, b: %d", a, b);
}
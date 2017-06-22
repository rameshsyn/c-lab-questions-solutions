#include <stdio.h>

typedef struct car {
    int num;
} cars;

void changeWithReference(cars*);
void main() {
    cars c;
    printf("Enter the number of a car: ");
    scanf("%d", &c.num);
    printf("Before Changed: %d", c.num);
    changeWithReference(&c);
    printf("\nAfter Changed: %d", c.num);
}

void changeWithReference(cars *c) {
    // Change
    c->num = 100;
}
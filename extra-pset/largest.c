/*
	Write a program to find the largest number among three numbers using function.		
*/

#include <stdio.h>

void largest (int a, int b, int c);

int main () {
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	largest(a, b, c);
	return 0;
}

void largest (int a, int b, int c) {
	if(a > b && a > c) {
		printf("The largest number is %d \n", a);
	} else if(b > a && b > c) {
		printf("The largest number is %d \n", b);
	} else {
		printf("The largest number is %d \n", c);
	}
}
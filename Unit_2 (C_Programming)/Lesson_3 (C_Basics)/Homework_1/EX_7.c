/*
 ============================================================================
 Name        : EX_7.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a=0,b=0;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);
	fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	fflush(stdin);
	fflush(stdout);
	printf("After Swapping, value of a = %f\nAfter Swapping, value of a =%f",a,b);
	return 0;
}

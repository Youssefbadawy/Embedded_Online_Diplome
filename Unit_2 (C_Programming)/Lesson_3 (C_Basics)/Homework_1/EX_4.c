/*
 ============================================================================
 Name        : EX_4.c
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
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &a , &b);
	fflush(stdin);
	fflush(stdout);
	printf("sum: %f", a*b);
	return 0;
}

/*
 ============================================================================
 Name        : EX_3.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=0,b=0;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a , &b);
	fflush(stdin);
	fflush(stdout);
	printf("sum: %d", a+b);
	return 0;
}

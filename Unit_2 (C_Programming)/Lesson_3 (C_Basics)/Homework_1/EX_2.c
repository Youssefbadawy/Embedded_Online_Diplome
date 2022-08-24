/*
 ============================================================================
 Name        : EX_2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=0;
	printf("Enter an Integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &a);
	fflush(stdin);
	fflush(stdout);
	printf("You entered: %d",a);
	return 0;
}

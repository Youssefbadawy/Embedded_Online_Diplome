/*
 ============================================================================
 Name        : EX_5.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a=0;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &a);
	fflush(stdin);
	fflush(stdout);
	printf("ASCII Value of %c = %d", a,a);
	return 0;
}

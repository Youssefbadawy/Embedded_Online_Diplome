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
	float a=0;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	if (a<0){
		printf("%f is negative",a);
	}
	else if (a>0){
		printf("%f is positive",a);
	}
	else{
		printf("You entered zero");
	}
	return 0;
}

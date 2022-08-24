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
	float a=0,b=0,c=0;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&a, &b, &c);

	if(a>=b && a>=c){
		printf ("Largest number is  %.2f",a);
	}
	else if(b>=a && b>=c){
		printf ("Largest number is  %.2f",b);
	}
	else{
		printf ("Largest number is  %.2f",c);
	}
	return 0;
}

/*
 ============================================================================
 Name        : EX_3.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 31 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct number{
	float real;
	float img;
}fir,sec;
void add(struct number x1 , struct number x2);
int main(void) {


	printf("for 1st complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&fir.real ,&fir.img);

	printf("for 2nd complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&sec.real ,&sec.img);
	add(fir,sec);

	return 0;
}

void add(struct number x1 , struct number x2){
	printf("SUM= %.1f + %.1fi",x1.real+x2.real ,x1.img+x2.img);
}

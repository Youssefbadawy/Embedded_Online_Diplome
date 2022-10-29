/*
 ============================================================================
 Name        : Q2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "math.h"


float doo(float num);
int main(void) {
	float a=0;
	printf("Enter number: \n");
	fflush(stdout);
	scanf("%f",&a);
	printf("output: %.3f \n",doo(a));
	printf("Enter number: \n");
	fflush(stdout);
	scanf("%f",&a);
	printf("output: %.3f \n",doo(a));


	return 0;
}

float doo(float num){
	return sqrt(num);
}

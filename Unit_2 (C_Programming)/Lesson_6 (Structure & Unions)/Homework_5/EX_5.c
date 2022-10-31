/*
 ============================================================================
 Name        : EX_5.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 31 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define Area(r) (PI)*r*r

int main(void) {
	int R;
	float AR;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%d",&R);
	AR=Area(R);
	printf("Area = %.2f",AR);

	return 0;
}

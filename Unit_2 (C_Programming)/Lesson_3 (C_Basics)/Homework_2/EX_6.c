/*
 ============================================================================
 Name        : EX_6.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=0,sum=0;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	for (int i=0; i<=a; i++){
		sum+=i;
	}
	printf("sum = %d", sum);

	return 0;
}

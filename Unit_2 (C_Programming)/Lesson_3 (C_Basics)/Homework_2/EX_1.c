/*
 ============================================================================
 Name        : EX_1.c
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
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	b=a%2;
	if(b==0){
		printf("%d is EVEN",a);
	}
	else{
		printf("%d is ODD",a);
	}
	return 0;
}

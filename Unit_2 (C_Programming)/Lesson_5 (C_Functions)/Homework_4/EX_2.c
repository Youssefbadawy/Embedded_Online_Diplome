/*
 ============================================================================
 Name        : EX_2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Oct 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int num);

int main(void) {
	int x=0;
	printf("Enter a positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of %d is: %d",x ,fact(x));


	return 0;
}

int fact(int num){
	int f=num;
	if(num>1){
	f=f*fact(num-1);
	}
	return f;
}

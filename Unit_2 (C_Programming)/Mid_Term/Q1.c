/*
 ============================================================================
 Name        : Q1.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int num);

int main(void) {
	int a=0;
	printf("Enter number: \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("output: %d",sum(a));

	return 0;
}

int sum(int num){
	int rem;
	static int new=0;
	if(num!=0){
		rem=num%10;
		new+=rem;
		sum(num/10);
	}
	return new;
}

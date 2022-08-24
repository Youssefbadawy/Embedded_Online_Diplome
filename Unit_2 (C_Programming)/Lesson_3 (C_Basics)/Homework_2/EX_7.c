/*
 ============================================================================
 Name        : EX_7.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=0,fact=1;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	if(a>0){
		for (int i=1; i<=a; i++){
			fact*=i;
		}
		printf("factorial of %d = %d",a, fact);
	}
	else if(a==0){
		printf("factorial of 0 = 1");
	}
	else{
		printf("Error !!! Factorial of negative number doesn't exist");
	}



	return 0;
}

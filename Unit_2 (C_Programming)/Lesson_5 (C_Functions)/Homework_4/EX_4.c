/*
 ============================================================================
 Name        : EX_4.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Oct 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int expo(int base, int pow);

int main(void) {
	int a,b;
	printf("Enter bas number: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d",&b);
	fflush(stdout);
	printf("%d ^ %d = %d ",a ,b ,expo(a,b));


	return 0;
}

int expo(int base, int pow){
	if(pow!=0){
		return base * expo(base,pow-1);

	}

	else
		return 1;
}

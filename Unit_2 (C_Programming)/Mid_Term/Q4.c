/*
 ============================================================================
 Name        : Q4.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev(int num);
int main(void) {
	int a=0;
	printf("input: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("output: ");
	rev(a);
	printf("\n");
	printf("input: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("output: ");
	rev(a);
	return 0;
}
void rev(int num){
	int rem;
	if(num!=0){
		rem=num%10;
		printf("%d",rem);
		rev(num/10);
	}
}

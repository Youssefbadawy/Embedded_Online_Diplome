/*
 ============================================================================
 Name        : Q5.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int countones(int num);
int main(void) {
	int a=0;
	printf("Enter number: \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("output: %d \n",countones(a));
	printf("Enter number: \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("output: %d \n",countones(a));

	return 0;
}

int countones(int num){
	int count=0;
	for(int i=0;i<16;i++){
		if((num & 1<<i)){
			count++;
		}
	}
	return count;
}

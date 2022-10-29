/*
 ============================================================================
 Name        : Q10.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int MAX(int num);
int main(void) {
	int a=0;
	printf("Enter number: \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("max num of ones: %d",MAX(a));
	printf("\nEnter number: \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("max num of ones: %d",MAX(a));

	return 0;
}

int MAX(int num){
	int count=0, max=0;
	for (int i=0;i<6;i++){
		if(num&1<<i){
			count++;
			if(max<=count)
				max=count;
		}
		else
			count=0;
	}
	return max;
}

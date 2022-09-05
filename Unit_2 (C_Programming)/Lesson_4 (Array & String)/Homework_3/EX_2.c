/*
 ============================================================================
 Name        : EX_2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 1 Sep 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr[100];
	int n=0;
	float sum=0;

	printf("Enter the number of data:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	if(n<=100){
		for(int i=1;i<=n;i++){

			printf("%d Enter number: ",i);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&arr[i-1]);
			sum+=arr[i-1];
		}

		printf("Average = %.2f",sum/(float)n);
	}

	else printf("Enter Number less than 100");


	return 0;
}

/*
 ============================================================================
 Name        : EX_5.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Sep 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n=0,i=0;
	int arr[100];
	int e=0,l=1;

	printf("Enter no of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		arr[i]=(i+1)*11;
		printf("%d  ",arr[i]);
	}
	printf("\nEnter the element to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&e);

	for(i=0;i<n;i++){
		if(arr[i]==e){
			printf("\nNumber found at the location: %d",l);
		}
		else{
			l++;
		}
	}
	return 0;
}

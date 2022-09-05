/*
 ============================================================================
 Name        : EX_4.c
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
	int e=0,l=0;

	printf("Enter no of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		arr[i]=i+1;
		printf("%d  ",arr[i]);
	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&e);

	printf("\nEnter the location: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&l);
	arr[l-1]=e;

	for(i=l;i<=n;i++){
		arr[i]=i;
	}

	for(i=0;i<=n;i++){
		printf("%d  ",arr[i]);}

	return 0;
}

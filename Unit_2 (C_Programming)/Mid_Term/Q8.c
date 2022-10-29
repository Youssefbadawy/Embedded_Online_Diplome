/*
 ============================================================================
 Name        : Q8.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void rev(int arr[], int n);

int main(void) {
	int array[10];
	int a=0;
	printf("Enter size of array: \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter elements of array: \n");
	fflush(stdout);
	for(int i=0;i<a;i++){
		scanf("%d",&array[i]);
	}
	printf("reverse array is :\n");
	rev(array,a);

	return 0;
}

void rev(int arr[], int n){
	for(int i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}

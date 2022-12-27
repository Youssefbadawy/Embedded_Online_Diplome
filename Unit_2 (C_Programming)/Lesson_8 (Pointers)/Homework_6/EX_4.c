/*
 ============================================================================
 Name        : EX_4.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 4 Decamber 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char num[15];
	int count;
	char *ptr=&num[0];

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d",&count);
	printf("Input %d number of elements in the array :\n",count);
	fflush(stdout);

	for(int i=0; i<count; i++){
		printf("element-%d : ",i+1);
		scanf("%c",ptr);
		fflush(stdin);
		fflush(stdout);
		ptr++;
	}
	scanf("%c",ptr);

	printf("\nThe elements of array in reverse order are : \n");
	for(int i=0; i<count; i++){

		printf("element-%d : %c\n",count-i ,*ptr);
		fflush(stdout);
		ptr--;
	}

	return 0;
}

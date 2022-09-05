/*
 ============================================================================
 Name        : EX_3.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Sep 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m[100][100];
	int r=0,c=0,i=0,j=0;

	printf("Enter rows and columns of matrix: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&r,&c);

	printf("Enter the elements of 1st matrix\n");
	for (  i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&m[i][j]);
			fflush(stdin);
			fflush(stdout);
		}
	}

	printf("Entered matrix: \n");

	for (  i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("%d \t",m[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of matrix: \n");

	for (  i=0;i<c;i++){
		for( j=0;j<r;j++){
			printf("%d \t",m[j][i]);
		}
		printf("\n");
	}
	return 0;
}

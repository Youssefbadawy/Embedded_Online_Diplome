/*
 ============================================================================
 Name        : EX_1.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 1 Sep 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2];
	float b[2][2];
	int i,j;

	printf("Enter the elements of 1st matrix\n");
	for ( i=0;i<2;i++){
		for( j=0;j<2;j++){
			printf("enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
			fflush(stdin);
			fflush(stdout);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	for ( i=0;i<2;i++){
		for( j=0;j<2;j++){
			printf("enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][j]);
			fflush(stdin);
			fflush(stdout);
		}
	}

	printf("Sum of matrix:\n");

	for ( i=0;i<2;i++){
		for( j=0;j<2;j++){
			printf("%.1f \t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}



	return 0;
}

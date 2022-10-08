/*
 ============================================================================
 Name        : EX_1.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Oct 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primes(int intr1, int intr2);

int main(void) {
	int x=0, y=0;
	printf("Enter two numbers(Intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&x ,&y);
	primes(x,y);
	return 0;
}


void primes(int intr1, int intr2){
	printf("prime numbers between %d and %d are: ",intr1 ,intr2);
	int flag=0;
	for(int i=intr1;i<=intr2;i++){
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",i);
		}
		flag=0;
	}
}

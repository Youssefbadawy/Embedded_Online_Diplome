/*
 ============================================================================
 Name        : Q7.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum_1_100(void);
int main(void) {
	printf("the sum between 1 to 100 is: %d",sum_1_100());

	return 0;
}

int sum_1_100(void){

	return (100*49)+150;
}

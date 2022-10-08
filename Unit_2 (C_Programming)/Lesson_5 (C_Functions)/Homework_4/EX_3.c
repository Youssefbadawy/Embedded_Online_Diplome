/*
 ============================================================================
 Name        : EX_3.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Oct 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev();

int main(void) {
	printf("Enter a sentence: ");
	fflush(stdout);
	rev();

	return 0;
}

void rev(){
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		rev();
		printf("%c",c);
	}

}

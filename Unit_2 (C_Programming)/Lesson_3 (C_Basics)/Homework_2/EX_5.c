/*
 ============================================================================
 Name        : EX_5.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a=0;
		printf("Enter a character: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&a);

		if((a>='a'&& a<='z')||(a>='A' && a<='Z')){
			printf("%c is an Alphabet", a);
		}
		else{
			printf("%c not an Alphabet", a);
		}
	return 0;
}

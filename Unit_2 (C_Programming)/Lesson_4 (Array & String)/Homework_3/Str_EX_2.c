/*
 ============================================================================
 Name        : Str_EX_2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Sep 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char s[200];
	char c=0;

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(s);

	for(int i=0;s[i]!=0;i++){
		c++;
	}

	printf("length of string: %d",c);

	return 0;
}

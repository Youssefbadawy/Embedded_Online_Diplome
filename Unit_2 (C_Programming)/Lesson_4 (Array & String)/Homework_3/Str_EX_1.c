/*
 ============================================================================
 Name        : Str_EX_1.c
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
	char n=0;

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(s);

	printf("Enter a character to find frequency: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);

	for(int i=0;s[i]!=0;i++){
		if(s[i]==c){
			n++;
		}

	}

	printf("frequency of %c : %d",c,n);
	return 0;
}

/*
 ============================================================================
 Name        : Str_EX_3.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 5 Sep 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char s[200];
	char temp=0;
	int i=0,j=0;

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(s);

	j=strlen(s)-1;
	for(i=0;i<j;i++){
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		j--;
	}
	printf("Reverse string is: %s",s);

	return 0;
}

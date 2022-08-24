/*
 ============================================================================
 Name        : EX_2.c
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
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("%c is a Vowel", a);
	}
	else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		printf("%c is a Vowel", a);
	}
	else{
		printf("%c is a Consonant", a);
	}
	return 0;
}

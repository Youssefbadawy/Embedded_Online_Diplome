/*
 ============================================================================
 Name        : EX_3.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 4 Decamber 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[20];
	char *ptr=str;

	printf("Input a string: ");
	fflush(stdout);
	gets(str);

	for(char i=0; i<20; i++){
		if(*ptr)
			ptr++;

		else
			break;
	}

	printf("Reverse of the string is: ");
	while(ptr>str){
		ptr--;
		printf("%c",*ptr);
	}
	return 0;
}

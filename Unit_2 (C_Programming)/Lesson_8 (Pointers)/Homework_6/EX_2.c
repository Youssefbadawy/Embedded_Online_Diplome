/*
 ============================================================================
 Name        : EX_2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 4 Decamber 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alph[26];
	char *ptr=alph;

	printf("The alphapets are: \n");

	for(char i=0; i<26; i++){
		*ptr='A'+i;
		printf("%c ",*ptr);
		ptr++;
	}
	return 0;
}

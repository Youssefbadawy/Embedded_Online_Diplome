/*
 ============================================================================
 Name        : Q9.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 19 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void revo(char str[]);
int main(void) {
	char a[50];
	printf("Enter string: ");
	fflush(stdout);
	gets(a);
	revo(a);
	return 0;
}

void revo(char str[]){
	int i = strlen(str);
	char ove[50];
	for (i;i>=0;i--){
		if(str[i]==' '){
			for(int j=i+1;j<=strlen(str);j++){
				printf("%c",str[j]);
			}
		}
	}
	for(int k=0;k<strlen(str);k++){
		if(str[k]!=' '){
			printf("%c",str[k]);
		}
		else
			break;
	}
}

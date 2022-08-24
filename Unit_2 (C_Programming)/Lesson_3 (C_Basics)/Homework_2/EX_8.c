/*
 ============================================================================
 Name        : EX_8.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char oper=0;
	float a=0,b=0;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&oper);
	printf("Enter 2 operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&a, &b);

	switch(oper)
	{
	case'+':{
		printf("%.1f + %.1f = %.1f",a,b,a+b);
	}
	break;
	case'-':{
		printf("%.1f - %.1f = %.1f",a,b,a-b);
	}
	break;
	case'*':{
		printf("%.1f * %.1f = %.1f",a,b,a*b);
	}
	break;
	case'/':{
		printf("%.1f / %.1f = %.1f",a,b,a/b);
	}
	break;
	default:
		printf("ERROR!!! Enter one of these operands (+ , - , * , / )");
		break;
	}

	return 0;
}

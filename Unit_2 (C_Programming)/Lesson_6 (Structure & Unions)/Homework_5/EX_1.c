/*
 ============================================================================
 Name        : EX_1.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 31 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct student{
		char name[20];
		int roll;
		float mark;
	}variable;

	printf("Enter information of student:\nEnter name: ");
	fflush(stdout);
	scanf("%s",&variable.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&variable.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&variable.mark);

	printf("Displaying Information: \n");
	printf("name: %s \n",variable.name);
	printf("roll: %d \n",variable.roll);
	printf("Marks: %.2f \n",variable.mark);
	return 0;
}

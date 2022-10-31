/*
 ============================================================================
 Name        : EX_4.c
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
			int mark;
		};

	struct student arr[10];
	printf("Enter info of students:\n");
	for (int i=0 ; i<10 ; i++){
		printf("for student number %d\n",i+1);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",&arr[i].name);
		printf("Enter roll number: ");
		fflush(stdout);
		scanf("%d",&arr[i].roll);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%d",&arr[i].mark);
	}
	printf("displaying info of students:\n");
	for (int j=0;j<10;j++){
		printf("for student of roll number: %d\n",arr[j].roll);
		printf("name: %s\n",arr[j].name);
		printf("marks: %d\n",arr[j].mark);
	}

	return 0;
}

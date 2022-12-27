/*
 ============================================================================
 Name        : EX_5.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 4 Decamber 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct employee{
	char *name;
	int id;
};
int main(void) {
	struct employee emp1={"joe",1000},emp2={"ahmed",1001},emp3={"Alex",1002};
	struct employee (*arr[])={&emp1, &emp2, &emp3};
	struct employee (*(*pts)[3])=&arr;
	fflush (stdout);

	printf("Employee Name: %s \n",(**(*pts+2)).name);
	printf("Employee ID: %d",(**(*pts+2)).id);



	return 0;
}

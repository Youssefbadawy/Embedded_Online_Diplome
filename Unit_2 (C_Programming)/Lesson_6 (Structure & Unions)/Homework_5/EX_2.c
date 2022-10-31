/*
 ============================================================================
 Name        : EX_2.c
 Author      : Youssef Badawy
 Version     :
 Copyright   : 31 October 2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int f;
	float i;

	struct add_distance{
		int feet;
		float inch;
	}firstdis,seconddis;

	printf("Enter information for 1st distance:\nEnter feet: ");
	fflush(stdout);
	scanf("%d",&firstdis.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&firstdis.inch);
	printf("Enter information for 2nd distance:\nEnter feet: ");
	fflush(stdout);
	scanf("%d",&seconddis.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&seconddis.inch);

	if(firstdis.inch + seconddis.inch >= 12){
		f= firstdis.feet + seconddis.feet + (int)((firstdis.inch + seconddis.inch)/12);
		i= firstdis.inch + seconddis.inch - 12 ;
	}
	else{
		f= firstdis.feet + seconddis.feet + (int)((seconddis.inch + firstdis.inch)/12);
		i= seconddis.inch + firstdis.inch ;
	}
	printf("Sun of distances: %d\' - %.1f\" ",f,i);


	return 0;
}

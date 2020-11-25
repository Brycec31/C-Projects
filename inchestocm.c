/************************************
 * 	EECS2031 - Lab 6
 * 	Filename: lab6a.c
 * 	Author: Cooke, Bryce
 * 	Email: brycec@my.yorku.ca
 * 	EECS login ID: brycec
 ***********************************/
#include <stdio.h>
main()
{
	float f = 2;
	while (f != 0){ //as long as f is not zero
		printf("Enter the measurement in inches(enter 0 to end)>");
		scanf("%f", &f); //uses scanf to read input
		if (f == 0){
			break; //breaks while loop
		}
		f = f * 2.54; //converts to inches
		printf("\n%.2f cm\n\n", f); //displays inches
	}
	
}

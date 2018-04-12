/*
 ============================================================================
 Name        : DisplayPattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int row;
	int column;

	printf("______________________________________________\n");
	printf("Pattern A\t\t\tPattern B\n");
	printf("______________________________________________\n");

	for(row=1; row<12; ++row){
		for(column=1; column < row; ++column){
			printf("+");


		}
		if((row == 9) || (row == 10) || (row == 11))
			printf("\t\t\t");
		else
			printf("\t\t\t\t");
		
		for(int column = 12; column > row; column--)
			printf("+");
		    printf("\n");

	}
	printf("______________________________________________\n");
	return 0;

}

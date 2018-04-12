/*
 ============================================================================
 Name        : StrockTrading.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int shares = 1000;
	double price = 45.50;
	double paid = shares*45.50;

	double commission = paid*0.02;
	double total = paid+commission;

	double madeAfterSold = shares*56.90;
	double commission2 = madeAfterSold*0.02;
	double total2 = madeAfterSold-commission2;

	printf("amount paid for stock: $%.2f\n", paid);
	printf("commision paid to stockbroker: $%.2f\n", commission);
	printf("amount joe sold the stock for: $%.2f\n", madeAfterSold);
	printf("commision paid to stockbroker after selling: $%.2f\n", commission2);
	printf("profit: $%.2f\n", total2-total);
	
	return 0;
}

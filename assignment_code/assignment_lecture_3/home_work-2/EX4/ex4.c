/*
 * ex4.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	float number ;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&number);
	if (number>0)
		printf("%f is positive.",number);
	else if (number==0)
		printf("you entered zero.");
	else
		printf("%f is negative.",number);


}

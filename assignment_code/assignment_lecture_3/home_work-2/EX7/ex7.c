/*
 * ex7.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	int factorial=1,number,i;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&number);

	if (number>0)
	{
		for (i=1;i<=number;i++)
		{
			factorial *= i ;
		}
		printf("Factorial = %d",factorial);

	}
	else if (number==0)
	{
		printf("Factorial = 1");

	}
	else
		printf("Error!! Factorial of negative number doesn't exist. ");

}


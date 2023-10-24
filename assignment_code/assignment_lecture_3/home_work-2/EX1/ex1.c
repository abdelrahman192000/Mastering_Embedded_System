/*
 * ex1.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */

#include <stdio.h>

int main (void)
{
	int number;
	printf("Enter an integer you want to check:");
	fflush (stdout);
	scanf("%d",&number);

	if (number%2 == 0)
	{
		printf("%d is even",number);
	}
	else
		printf("%d is odd",number);



}



/*
 * ex6.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	int number,i,sum=0;
	printf("Enter and integer:");
	fflush(stdout);
	scanf("%d",&number);

	for (i=0;i<=number;i++)
	{
		sum += i;
	}
	printf("sum = %d",sum);




}



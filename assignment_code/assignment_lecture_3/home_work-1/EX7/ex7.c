/*
 * ex7.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	int num_1,num_2;

	printf("enter first number:");
	fflush(stdout);
	scanf("%d",&num_1);
	printf("enter second number:");
	fflush(stdout);
	scanf("%d",&num_2);

	num_1=num_1+num_2;
	num_2=num_1-num_2;
	num_1=num_1-num_2;

	printf("number_1 after swap = %d\n",num_1);
	printf("number_2 after swap = %d",num_2);


}

/*
 * ex3.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	float num_1,num_2,num_3 ;
	printf("Enter three number:");
	fflush(stdout);
	scanf("%f %f %f",&num_1,&num_2,&num_3);

	if (num_1>num_2 &&num_1> num_3)
		printf("Largest number = %f",num_1);
	if (num_2>num_1 &&num_2> num_3)
		printf("Largest number = %f",num_2);
	else
		printf("Largest number = %f",num_1);



}

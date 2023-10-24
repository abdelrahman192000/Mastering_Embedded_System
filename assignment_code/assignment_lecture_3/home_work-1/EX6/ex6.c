/*
 * ex6.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	float number_a,number_b,temp;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&number_a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&number_b);

	temp=number_a;
	number_a=number_b;
	number_b=temp;

	printf("After swapping, value of a = %f\n",number_a);
	printf("After swapping, value of b = %f",number_b);



}

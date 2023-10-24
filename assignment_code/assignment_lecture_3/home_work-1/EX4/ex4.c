/*
 * ex4.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	float number_1,number_2,result;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%f %f",&number_1,&number_2);
	result = number_1 * number_2 ;
	printf("Sum: %f",result);



}

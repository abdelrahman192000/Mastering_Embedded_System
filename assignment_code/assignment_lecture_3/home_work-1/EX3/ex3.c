/*
 * ex3.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	int number_1,number_2,result;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d",&number_1,&number_2);
	result = number_1 + number_2 ;
	printf("Sum: %d",result);



}

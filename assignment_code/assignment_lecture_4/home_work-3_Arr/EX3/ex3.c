/*
 * ex3.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */

#include <stdio.h>

int main (void)
{
	int arr[20][20],rows,colums,rows_index,colums_index;

	printf("Enter rows and colums of matrix:");
	fflush(stdout);
	scanf("%d %d",&rows,&colums);

	for (rows_index=0;rows_index<rows;rows_index++)
	{
		for (colums_index=0;colums_index<colums;colums_index++)
		{
			printf("Enter elements a%d%d: ",rows_index+1,colums_index+1);
			fflush(stdout);
			scanf("%d",& arr[rows_index][colums_index]);

		}

	}
	printf("Entered Matrix:\n");
	for (rows_index=0;rows_index<rows;rows_index++)
	{
		for (colums_index=0;colums_index<colums;colums_index++)
		{

			printf("%d  ",arr[rows_index][colums_index]);


		}
		printf("\n");

	}

	printf("Transpose of Matrix:\n");
	for (colums_index=0;colums_index<colums;colums_index++)
	{
		for (rows_index=0;rows_index<rows;rows_index++)
		{

			printf("%d  ",arr[rows_index][colums_index]);


		}
		printf("\n");

	}






}



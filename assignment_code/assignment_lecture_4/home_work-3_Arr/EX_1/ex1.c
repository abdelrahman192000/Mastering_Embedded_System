/*
 * ex1.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */

#include <stdio.h>

int main (void)
{
	float arr_1[2][2],arr_2[2][2],sum[2][2] ;
	int i,j;

	printf("Enter the elements of 1st matrix \n");
	fflush(stdout);
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%f",&arr_1[i][j]);

		}
	}
	printf("Enter the elements of 2st matrix \n");
	fflush(stdout);
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%f",&arr_2[i][j]);

		}
	}

	for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				sum[i][j]=arr_1[i][j] +arr_2[i][j];

			}
		}

	for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				printf("%f    ",sum[i][j]);

			}
			printf("\n");
		}













}



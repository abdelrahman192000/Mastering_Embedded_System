/*
 * ex4.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */

#include <stdio.h>

int main (void)
{
	int max_number ,arr[30] ,i,inserted_num,location;
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&max_number);

	for (i=0;i<max_number;i++)
	{
		arr[i]=i+1;
		printf("%d ",arr[i]);
	}
	printf("\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&inserted_num);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d",&location);


	arr[location-1]= inserted_num;
	for (i=0;i<max_number;i++)
	{

		printf("%d ",arr[i]);
	}






}




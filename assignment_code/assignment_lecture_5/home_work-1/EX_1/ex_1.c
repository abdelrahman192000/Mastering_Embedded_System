/*
 * ex_1.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Abdelrahman Adel Mahmoud
 *
 *
 */

#include <stdio.h>

void intervals_fun (int ,int );

int main (void)
{
	int number_1,number_2 ;
	printf("Enter two numbers (intervals) :");
	fflush(stdout);
	scanf("%d %d",&number_1,&number_2);
	intervals_fun(number_1,number_2);


}
void intervals_fun (int x,int y )
{

	int i;
	i=x+1;
	printf("Prime numbers between %d and %d are : ",x,y);
	for (;i<y;i++)
	{
		printf("%d ",x);

	}


}




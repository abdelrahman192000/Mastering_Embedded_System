/*
 * ex2.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */

#include <stdio.h>

int main (void)
{
	char arr[30];
	int i;

	printf("Enter a string :");
	fflush(stdout);
	scanf("%s",arr);

	for (i=0;arr[i]!='\0';i++);
	printf("Length of string : %d",i);



}



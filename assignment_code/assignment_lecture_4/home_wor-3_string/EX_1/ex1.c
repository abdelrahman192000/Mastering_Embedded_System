/*
 * ex1.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */

#include <stdio.h>

int main (void)
{
	char arr[30],freq_char;
	int i,count=0;
	printf("Enter a string :");
	fflush(stdout);
	gets (arr);
	printf("Enter a character to find frequency :");
	fflush(stdout);
	scanf(" %c",&freq_char);


	for (i=0;arr[i]!='\0';i++)
	{
		if (freq_char==arr[i])
		{
			count++;

		}


	}
	printf("\nFrequency of %c = %d",freq_char,count);

}



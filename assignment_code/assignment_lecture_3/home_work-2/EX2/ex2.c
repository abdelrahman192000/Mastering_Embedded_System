/*
 * ex2.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	char character ;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&character);

	if (character=='a'||character=='A'||character=='e'||character=='E'||character=='i'||character=='I'||character=='o'||character=='O')
	{
		printf("%c is a vowel.",character);


	}
	else
		printf("%c is a consonant.",character);


}

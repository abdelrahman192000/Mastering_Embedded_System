/*
 * ex5.c
 *
 *  Created on: Aug 8, 2023
 *      Author: usedn
 */


#include <stdio.h>

int main (void)
{
	char character;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character,character);

}

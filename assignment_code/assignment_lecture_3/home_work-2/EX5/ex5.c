/*
 * ex5.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdelrahman Adel Mahmoud
 */


#include <stdio.h>

int main (void)
{
	char character ;

	printf("Enter a character: ");
	fflush (stdout);
	scanf("%c",&character);

	if ((65<=character && character<=90) || (97<=character && character<=122))
		printf("%c is an alphabet",character);
	else
		printf("%c is not alphabet",character);




}

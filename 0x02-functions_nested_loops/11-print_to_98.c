#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @num: takes in an integer
 *
 */
void print_to_98(int num)
{
	int i;

	if (num > 98)
	{
		for (i = num; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = num; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}

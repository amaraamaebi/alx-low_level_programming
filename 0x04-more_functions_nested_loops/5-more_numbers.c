#include "main.h"
#include <stdio.h>

/**
 * more_numbers - void
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				k = 48 + j;
				_putchar(k);
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n');
	}
}

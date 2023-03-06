#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - void
 * @n: variable to print.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	if (n < 1)
		_putchar('\n');
	else
	{
		while (n > i)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}

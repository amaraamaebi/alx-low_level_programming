#include "main.h"
#include <stdio.h>

/**
 * print_triangle - void
 * @size: variable to print.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int diff;

	i = 0;
	while (size > i)
	{
		diff = (size - 1) - i;
		for (j = 0; j < size; j++)
		{
			if (j >= diff)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
		i++;
	}
}

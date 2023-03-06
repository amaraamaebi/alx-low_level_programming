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

	i = 0;
	if (size < 1)
		_putchar('\n');
	else
	{
		while (size > i)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(32);
			}
			_putchar(35);
			_putchar('\n');
			i++;
		}
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_line - void
 * @n: variable to print.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (n > i)
	{
		_putchar(95);
		i++;
	}
}

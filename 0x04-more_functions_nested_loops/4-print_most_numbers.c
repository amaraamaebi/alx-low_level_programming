#include "main.h"
#include <stdio.h>

/**
 * print_numbers - void
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

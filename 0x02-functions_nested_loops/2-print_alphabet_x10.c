#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 97;
	j = 0;
	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

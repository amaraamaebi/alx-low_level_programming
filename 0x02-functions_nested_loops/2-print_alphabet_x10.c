#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}

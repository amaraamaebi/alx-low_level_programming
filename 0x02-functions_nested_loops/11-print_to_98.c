#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: integer range
 * Return: 1 on (Success)
 */
void print_to_98(int n)
{
	int diff;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
	}
	else if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
	}
	else
	{
		diff = 98 + n;
		for (i = n; i <= diff; i++)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
	}
}

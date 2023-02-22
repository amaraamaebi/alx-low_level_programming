#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: integer to print
 * Return: 1 on (Success)
 */
int print_last_digit(int n);
{
	int digit;

	if (n < 0)
	{
		digit = n % 10;
		_putchar('0' + (digit * -1));
		return (digit * -1);
	}
	else
	{
		digit = n % 10;
		_putchar('0' + digit);
		return (digit);
	}
}

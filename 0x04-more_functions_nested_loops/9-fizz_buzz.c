#include "main.h"
#include <stdio.h>

/**
 * main - void
 * variable to print.
 * Return: Always 0.
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
			_putchar(32);
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			printf("Buzz");
			_putchar(32);
		}
		else
		{
			printf("%d", i);
			_putchar(32);
		}
	}
	_putchar('\n');
}

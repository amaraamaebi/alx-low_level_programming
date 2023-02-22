#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
}

#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: character to print
 * Return: 1 on ` (Success)
 */
int _islower(char c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}

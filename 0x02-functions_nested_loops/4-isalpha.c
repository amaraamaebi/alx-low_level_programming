#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * @c: character to print
 * Return: 1 on (Success)
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	else
		return (0);
}

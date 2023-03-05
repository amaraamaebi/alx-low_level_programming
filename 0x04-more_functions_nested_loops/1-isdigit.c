#include "main.h"
#include <stdio.h>

/**
 * _isdigit - _isdigit.
 * @c: variable collect.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

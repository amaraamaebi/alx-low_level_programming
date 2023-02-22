#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @i: integer to print
 * Return: 1 on (Success)
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}

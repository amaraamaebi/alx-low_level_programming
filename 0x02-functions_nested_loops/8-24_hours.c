#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * Return: 1 on (Success)
 */
void jack_bauer(void)
{
	int i;
	int j;
	int min_first, min_last, hr_first, hr_last;

	for (i = 0; i < 24; i++)
	{
		hr_last = i % 10;
		hr_first = i;
		while (hr_first >= 10)
		{
			hr_first = hr_first / 10;
		}

		_putchar(hr_first + 48);
		_putchar(hr_last + 48);
		_putchar(58);
		for (j = 0; j < 60; j++)
		{
			min_first = i % 10;
			min_last = j;
			while (min_last >= 10)
			{
				min_last = min_last / 10;
			}
			_putchar(min_first + 48);
			_putchar(min_last + 48);
		}

	}
}

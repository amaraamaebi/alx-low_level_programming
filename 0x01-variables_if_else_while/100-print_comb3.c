#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < 9)
	{
		putchar('0' + i);
		putchar('0' + j);
		if (i < 8)
		{
			putchar(44);
			putchar(32);
		}

		if (j > 8)
		{
			j = i + 1;
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

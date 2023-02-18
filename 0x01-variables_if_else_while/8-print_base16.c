#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	i = 0;
	while(i < 104)
	{
		if (i < 10)
			putchar('0' + i);
		else if (i > 96 && i < 103)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

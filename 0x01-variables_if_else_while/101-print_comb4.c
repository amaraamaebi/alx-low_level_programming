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
	int k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 8)
	{
		putchar('0' + i);
		putchar('0' + j);
		putchar('0' + k);
		if (i < 7)
		{
			putchar(44);
			putchar(32);
		}
		if (k > 8)
		{
			if (j > 7)
			{
				i++;
				j = i;
			}
			j++;
			k = j;
		}
		k++;
	}
	putchar('\n');
	return (0);
}

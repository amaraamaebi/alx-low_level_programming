#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 0; alpha < 10; alpha++)
		putchar('0' + alpha);
	putchar('\n');
	return (0);
}

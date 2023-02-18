#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alpha;
	char upper;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (upper = 'A'; alpha <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}

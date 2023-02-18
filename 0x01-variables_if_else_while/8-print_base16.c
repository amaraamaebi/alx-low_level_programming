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
	int iter;
	int int_array[10];
	int char_array[7];
	int ascii_txt = 97;
	int size_int;
	int size_char;
	int size_array;

       	for (i = 194; i >= 185; i--)
       	{
		/*  Writes the equivalent character */
		iter = 194 - i;
		int_array[iter] = iter;
		if (iter < 6)
			char_array[iter] = ascii_txt + iter;
		putchar('0' + iter);
	}
	size_int = (sizeof(char_array) / sizeof(char_array[0]));
	size_char = (sizeof(int_array) / sizeof(int_array[0]));
	size_array = size_int > size_char ? size_int : size_char;
	j = 0;
	while (j < size_array)
	{
		if (j < size_char)
			putchar(char_array[j]);
		j++;
	}
	return (0);
}

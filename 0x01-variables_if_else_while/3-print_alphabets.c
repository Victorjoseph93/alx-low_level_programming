#include <stdio.h>
/**
 * main - input values
 * Return: (0) when successful
 */
int main(void)
{
	char c;
	char b;

	for (c = 'a'; c <= 'z'; c++)
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(c);
	}
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

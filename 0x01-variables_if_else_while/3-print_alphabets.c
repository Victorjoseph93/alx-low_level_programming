#include <stdio.h>
/**
 * main - input values
 * Return: (0) when successful
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(a);
	}
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

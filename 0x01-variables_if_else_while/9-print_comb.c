#include <stdio.h>
/**
 * main - program input
 * Return: (0) always
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
		if (i == 10)
		putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

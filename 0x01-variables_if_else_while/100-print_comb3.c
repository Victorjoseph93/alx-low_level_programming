#include <stdio.h>
/**
 * main - this is the main program function
 * Return: (0) when successful
 */

int main(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = a + 1; i < 10; i++)
		{
			putchar(a + '0');
			putchar(i + '0');
			if (a != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}

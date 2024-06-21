#include <stdio.h>
/**
 * main - enter program input
 * Return: (0) upon completion of program
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
		putchar('\n');
		return (0);

}

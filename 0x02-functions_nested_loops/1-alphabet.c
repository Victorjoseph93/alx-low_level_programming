#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints alphabets in lower case
 * Return: (0) when successful
 */

void print_alphabet(void)
{
	int a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

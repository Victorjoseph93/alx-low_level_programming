#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar followed by a new line
 * Return: (0) when successful
 */

int main(void)
{
	char c[] = "_putchar";
	int i;
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}


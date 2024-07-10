#include "main.h"

/**
 * _print_rev_recursion - prints a string s in reverse
 * @s: the string that is printed
 * Return: 0 when successful
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

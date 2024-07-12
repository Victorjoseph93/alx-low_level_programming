#include "main.h"

/**
 * _memset - this function will fill a block of memory
 * @s: the starting memory address that wil be filled
 * @b: the number of bytes to be overwritten
 * @n: integer variable to be changed
 *
 * Return: Array is changed with new byte value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

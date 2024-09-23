#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destination storing the string
 * @src: source of the string
 * @n: input int
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, src_len = 0;

	while (src[num++])
	src_len++;

	for (num = 0; src[num] && num < n; num++)
	dest[num] = src[num];

	for (num = src_len; num < n; num++)
	dest[num] = '\0';

	return (dest);
}

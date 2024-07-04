#include "main.h"

/**
 * _strncpy - copies at most an inputted number
 * of bytes from string src into dest
 * @dest: the butter storing the string
 * @src: source string
 * @n: maximum no of bytes
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}

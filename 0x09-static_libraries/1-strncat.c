#include "main.h"

/**
 * _strncat - this function is to concatenate
 * @dest: string to be appended
 * @src:string to be appended to dest
 * @n: input value
 * Return: return to dest if succesful and NULL if failure
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}

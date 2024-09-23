#include "main.h"

/**
 * _memcpy - this function will copy a memory area
 * @dest: destination of the stored memory
 * @src: the source to copy from
 * @n: unsigned integer variable
 *
 * Return: the copied memory in dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

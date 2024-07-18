#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function allocates a memory space
 * @b: size of memory to allocate
 * Return: returns pointer
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}

#include "main.h"
/**
 * set_bit - function sets the value of a bit at index,
 * starting from least bit at 0
 *
 * @n: the number to get bit from
 * @index: index of bit
 *
 * Return: returns value of bit if successful, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}

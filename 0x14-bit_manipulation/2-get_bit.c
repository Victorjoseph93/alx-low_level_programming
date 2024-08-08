#include "main.h"
/**
 * get_bit - function gets the value of a bit at index,
 * starting from the least bit at 0
 *
 * @n: number that the bit will be gotten  from
 * @index: the index of the bit
 *
 * Return: returns value of bit on success, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	return ((n & m) > 0);
}

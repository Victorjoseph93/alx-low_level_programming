#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - function converts a bit string to unsigned int
 *
 * @b: string to be converted
 *
 * Return: returns decimal unsigned integer value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == NULL)
		return (0);
	for (n = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = n << 1;
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}

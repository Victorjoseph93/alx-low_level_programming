#include "main.h"
/**
 * _isdigit - checks for digit between 0 to 9
 * @c: inputs value
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}

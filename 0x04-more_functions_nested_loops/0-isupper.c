#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 when uppercase and 0 when not
 */

int _isupper(int c)
{
	if (c > 65 && c < 91)
		return (1);

	return (0);
}

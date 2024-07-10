#include "main.h"
/**
 * _pow_recursion - returns the value of x raise to power y
 * @x: the base value
 * @y: the exponent or power
 * Return: 0 when successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}

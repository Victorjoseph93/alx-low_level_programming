#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: input value
 * Return: 0 when successful
 * when n = -1, the program returns an error
 */

int factorial(int n)
{
	int num;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	num = factorial(n - 1);
	return (n * num);
}

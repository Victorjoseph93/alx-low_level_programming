#include "main.h"
#include "stdio.h"

/**
 * main - function to check the code
 * Return: Always 0 when successful
 */

int main(void)
{
	int r;
	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}

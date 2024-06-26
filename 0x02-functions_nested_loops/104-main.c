#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_fib(int len)
{
	f = 1;
	l = 2;
	target = len - 2;
	for (i = 0 ; i < target ; i++)
	{

	fib = f + l;
		printf("%d : ", i + 4);
		printf("%.0Lf" , fib);
		f = l;
		l = fib;
		if (i < target - 1)
			printf("\n");
	}
	putchar('\n');
}



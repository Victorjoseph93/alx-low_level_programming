#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program input
 * Return: (0) when successful
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	if (j > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, j);
	}
	else
	{
		printf("last digit of %d is %d and i less than 6\n", n, j);
	}
	return (0);
}

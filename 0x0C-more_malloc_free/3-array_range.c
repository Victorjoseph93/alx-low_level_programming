#include "main.h"
#include <stdlib.h>

/**
  * array_range - this function creates an array of integers
  * @min: minimum array values
  * @max: maximum array values
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int i = 0;
	int *q;

	if (min > max)
		return (NULL);

	q = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (q == NULL)
		return (NULL);

	while (min <= max)
	{
		q[i] = min;
		i++;
		min++;
	}
	return (q);
}

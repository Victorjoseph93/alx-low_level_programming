#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}

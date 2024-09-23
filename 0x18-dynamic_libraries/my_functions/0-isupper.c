#include "main.h"
/**
 * _isupper - function that checks if letter is Uppercase
 * @c: the character that will be checked
 * Return: 1 if character is uppercase
 * when character is not uppercase return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}

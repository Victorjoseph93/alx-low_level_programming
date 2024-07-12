#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

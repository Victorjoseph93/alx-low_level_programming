#include "main.h"
/**
 * string_toupper - changes all to lowercase
 * of string to uppercase
 * @str: the string to be changed
 * Return: pointer to be changed
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (str[i] = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}

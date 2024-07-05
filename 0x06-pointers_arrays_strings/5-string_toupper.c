#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hello: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hello)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; hello[index] != '\0'; ++index)
	{
		if (hello[index] >= 'a' && hello[index] <= 'z')
		{
			hello[index] = hello[index] - desp;
		}
	}
	return (hello);
}

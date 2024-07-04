#include "main.h"
/**
 * _strcmp - compares pointers of two string
 * @s1: A pointer to the first string
 * @s2: A pointer to the secnd string
 * Return: If str1 <str2 the negative difference of the first unmatched
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && s1 == s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

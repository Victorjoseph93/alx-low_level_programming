#include "main.h"
/**
 * _isalpha - this function will check for alphabet character
 * @c: the character that will be checked
 * Return: 1 if the char is an alphabet 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

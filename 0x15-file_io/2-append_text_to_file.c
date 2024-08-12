#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - function appends text to file
  * @filename: name of the file
  * @text_content: content of the file
  *
  * Return: returns 1 on success and -1 if it fails
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptf;

	if (!filename)
		return (-1);

	ptf = open(filename, O_WRONLY | O_APPEND);
	if (ptf == -1)
		return (-1);

	if (text_content)
	{
		if (write(ptf, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(ptf);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int b = 0;

	while (s[b])
		b++;

	return (b);
}

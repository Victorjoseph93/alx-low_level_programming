#include "main.h"

/**
  * create_file - a function to create file
  * @filename: the name of the file
  * @text_content: content of the file
  *
  * Return:returns 1 on successs,-1 if it fails
  */
int create_file(const char *filename, char *text_content)
{
	int ptf;

	if (!filename)
		return (-1);

	ptf = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ptf == -1)
		return (-1);

	if (text_content)
		write(ptf, text_content, _strlen(text_content));

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
	int a = 0;

	while (s[a])
		a++;

	return (a);
}

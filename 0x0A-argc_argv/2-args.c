#include "main.h"
#include <stdio.h>

/**
  * main - program to Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0 on success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

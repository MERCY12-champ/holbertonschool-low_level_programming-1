#include "holberton.h"
#include <stdio.h>

/**
 * main - prints buffer in hexa
 * @argc: he number of command line arguments
 * @argv: An array containing the program command line arguments.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argc;
	for (count = 1; count < argc; count++)
	{
		printf("%s\n", count);
	}
	return(0);
}
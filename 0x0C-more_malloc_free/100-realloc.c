#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that concatenates two strings.
 * @old_size: number min.
 * @new_size: number max.
 * @ptr: array input.
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	ptr = malloc(old_size);

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	return (str);
}
